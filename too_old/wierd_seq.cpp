#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> seq = {30, 35, 38, 41, 54, 53, 78};

    int s = 12, t = 24;

    for (int i = 7; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            t += 8;
            int x = seq[i - 2] + t;
            seq.push_back(x);
        }
        else
        {
            s += 6;
            int y = seq[i - 2] + s;
            seq.push_back(y);
        }
    }

    for (int i = 0; i < n; i++)
        cout << seq[i] << " ";
}