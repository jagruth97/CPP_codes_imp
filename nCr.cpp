#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    long long resultant = 1;
    for(int i=0; i<r; i++)
    {
        resultant *= (n-i);
        resultant /= (i+1);
    }
    return static_cast<int>(resultant);
}

int main()
{
    int x = nCr(5, 3);
    cout<<x;
    return 0;
}