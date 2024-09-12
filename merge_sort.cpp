#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r)
{
    int n1 = mid - l + 1; // size of 1st arr
    int n2 = r - mid; // size of 2nd arr

    // temp arrs
    vector<int> L(n1); // from l to mid
    vector<int> R(n2); // from mid+1 to r

    for(int i = 0; i<n1; i++)
        L[i] = arr[l+i];

    for(int i = 0; i<n2; i++)
        R[i] = arr[mid+1 + i];

    int i = 0, j = 0, k = l; // k to traverse main arr, i to traverse L arr, j to trav R arr

    while(i < n1 && j < n2) // compare 2 arr values & insert them
    {
        if( L[i] < R[j])
            arr[k++] = L[i++];
        else    
            arr[k++] = R[j++];
    }
    // suppose 1 arr is smaller than the other, so then remaining elements to be added back to arr;
    while(i < n1)
        arr[k++] = L[i++];

    while(j < n2)
        arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int l, int r)
{
    if(l < r) // divide & conquer
    {
        int mid = (l+r)/2;
        mergeSort(arr, l, mid); // T: N/2
        mergeSort(arr, mid+1, r);  // T: N/2 both lead to logN

        merge(arr, l, mid, r); // from l to mid & mid to r // T: N
    }
}

int main()
{
    vector<int> a = {1, 3, 4, 2, 9 ,3};
    mergeSort(a, 0, a.size());

    for(int i:a)
        cout<<i<<" ";

    return 0;
}