#include<bits/stdc++.h>
using namespace std;

// T(O) : Best/Avg/Worst = O(n2);
void SelectionSort(vector<int>& arr, int& n)
{
    for(int i = 0; i<n-1; i++) // no need to go till last ele as it will be already sorted
    {
        int minidx = i;
        for(int j = i; j<n; j++) // from i till last ele
        {
            // minidx = arr[j] < arr[minidx] ? i : j;
            if(arr[j] < arr[minidx])
                minidx = j;
        }
        swap(arr[minidx], arr[i]);
    }
}

// T(O) : Worst/avg = O(n2) Best = O(n)
void BubbleSort(vector<int>& arr, int& n)
{ // in this, highest number gets pushed to last in each iteration
    for(int i = n-1; i>=0; i--) 
    {
        bool didSwap = false; // if it is swapped atleast once, generally to check if the received array is already sorted
        for(int j=0; j<=i-1;j++) // the size of arr sorting reduces
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didSwap = true;
            }
        }

        if(!didSwap) // meaning, no swap was done => the array is already sorted at 1st loop
            break;
    }
}

// T(O) : Worst/avg = O(n2) Best = O(n)
void InsertionSort(vector<int>& arr, int& n)
{
    for(int i = 0; i<n; i++)
    {
        int j = i;
        while(j>0 && arr[j-1] > arr[j]) // we wont go j = 0, cuz compare 0th with other elements
        {
            swap(arr[j-1], arr[j]);
            j--; // from j, go to left, if while true again swap swap swap
        }
    }
}

int main()
{
    vector<int> arr = {6,4,8,2,9,1,2,7};
    int n = arr.size();

    // SelectionSort(arr, n);
    // BubbleSort(arr, n);
    InsertionSort(arr, n);

    for(int i:arr)
        cout<<i<<" ";
    return 0;
}