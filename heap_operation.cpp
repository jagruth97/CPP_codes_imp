#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {-4, 3, 1, 0, 2, 5, 10, 8, 12, 9};

    // heapify built in function
    make_heap(a.begin(), a.end()); // constructs max heap

    // make_heap(a.begin(), a.end(), greater<int>()); // -> min heap construction

    cout<<"HEAP ELEMENTS"<<endl;
    for(auto i : a)
    cout<<i<<" ";

    cout<<endl;

    // IN CURRENT SCENARIO: MAX HEAP
    // heap push
    cout<<"HEAP PUSH: 7"<<endl;

    a.push_back(7);
    push_heap(a.begin(), a.end()); // T:O(logN) to heapify the latest element
    
    for(auto i : a)
    cout<<i<<" ";

    cout<<endl;

    // heap pop  T:O(logN) to heapify the latest element
    pop_heap(a.begin(), a.end()); // move the max ele to end as leaf node
    a.pop_back(); // now remov from vector

    for(auto i : a)
    cout<<i<<" ";

    return 0;
}