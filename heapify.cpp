#include<bits/stdc++.h>
using namespace std;

void maxheapify(vector<int>& a, int idx, int n) // max heap
{
    int largest = idx; // node
    int left = 2 * idx + 1; // left child
    int right = 2 * idx + 2; // right child

    if(left < n && a[largest] < a[left])
        largest = left;

    if(right < n && a[largest] < a[right])
        largest = right;

    // If the largest is not the root else it is already sorted
    if(largest != idx)
    {
        swap(a[idx], a[largest]);
        maxheapify(a, largest, n);
    }
}

void minheapify(vector<int>& a, int idx, int n)
{
    int smallest = idx;      // Initialize smallest as the root
    int left = 2 * idx + 1;  // Left child
    int right = 2 * idx + 2; // Right child

    // If the left child is smaller than the current smallest
    if (left < n && a[left] < a[smallest])
        smallest = left;

    // If the right child is smaller than the current smallest
    if (right < n && a[right] < a[smallest])
        smallest = right;

    // If the smallest is not the root
    if (smallest != idx)
    {
        // Swap the current node with the smallest child
        swap(a[idx], a[smallest]);

        // Recursively heapify the affected subtree
        minheapify(a, smallest, n);
    }
}

void construct_heap(vector<int>& a, int n)
{
     /* a node is a leaf node if it has no children, i.e., Nodes after index n/2 - 1 are all leaf nodes */
     // leaf nodes already satisfy heap property as they hav no children
    int last_non_leaf = n/2 - 1;
 
    for(int i = last_non_leaf; i>=0; i--) // so from this node to upwards(0) we heapify
        maxheapify(a, i, n);

    for(int i : a)
        cout << i << " ";

    cout << endl;

    for(int i = last_non_leaf; i>=0; i--)
        minheapify(a, i, n);

    for(int i : a)
        cout << i << " ";
    
}
int main()
{
    // building max heap / heapify
    // T: O(N), S: O(1) // since that array is given & we just modify it

    vector<int> a = {-4, 3, 1, 0, 2, 5, 10, 8, 12, 9};
    int n = a.size();

    construct_heap(a, n);

    return 0;
}


/*
If you have a binary heap array of size n = 7:

Index positions: 0 1 2 3 4 5 6
The tree would look like this:
       0
    /     \
   1       2
  / \     / \
 3   4   5   6

The last non-leaf node is at index 2 (since n/2 - 1 = 7/2 - 1 = 2).
You start heapifying from index 2, then move to 1, then finally to 0.

*/