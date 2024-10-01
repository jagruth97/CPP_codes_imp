#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    long long resultant = 1;
    for(int i=0; i<r; i++)
    {
        resultant *= (n-i); // since fact of big num in denom cancels the part of numerator, so multi only with remaining
        resultant /= (i+1); // divide in reverse -> 3! : 1 * 2 * 3 instead of 3*2*1
    }
    return static_cast<int>(resultant);
}

int main()
{
    int x = nCr(5, 3);
    cout<<x;
    return 0;
}