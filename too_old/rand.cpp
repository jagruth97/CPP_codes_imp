#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(void)
{
    int n = 14;
    vector<int> arr = {1, 3, 5, 9, 13, 22, 27, 35, 46, 51, 55, 83, 87, 23};
    int x = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (x < arr[i])
        {
            arr[i + 1] = arr[i];
        }
        else // if (x > arr[i])
        {
            arr[i + 1] = x;
            break;
        }
        // else
        // {
        //     arr[0] = x;
        //     break;
        // }
        for (auto it : arr)
            cout << it << " ";
        cout << endl;
        if (i == 0 && x < arr[0])
        {
            arr[0] = x;
            for (auto it : arr)
                cout << it << " ";
            cout << endl;
        }
    }
}
