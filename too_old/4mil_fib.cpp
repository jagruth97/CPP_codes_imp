#include <iostream>
using namespace std;
#include <vector>

int even(int x)
{
    if(x%2 == 0)
    {
        return 1;
    }else{
        return 0;
    }
}
main()
{
    vector<int> arr;
    arr = {1, 2};
    int size = 2;
    int next_term;
    int sum = 2;
    while(1) 
    {
        next_term = arr[size-1] + arr[size-2];
        // cout<<next_term<<endl;
        arr.push_back(next_term);
        size++;

        if(even(next_term) == 1)
        {
            sum +=  next_term;
        }
        if(next_term > 4000000)
        {
            break;
        }
    }
    cout<<sum;

}