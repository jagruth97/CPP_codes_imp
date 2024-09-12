#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'findTotalCost' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int findTotalCost(vector<int> arr)
{
    int totalCost = 0;
    int sum = 0, minVal = 0, maxVal = 0;

    while (arr.size() > 1)
    {
        minVal = *min_element(arr.begin(), arr.end());
        maxVal = *max_element(arr.begin(), arr.end());

        arr.erase(find(arr.begin(), arr.end(), minVal));
        arr.erase(find(arr.begin(), arr.end(), maxVal));

        sum = minVal + maxVal;
        totalCost += ceil(static_cast<double>(sum) / (maxVal - minVal + 1));

        arr.push_back(sum);
    }

    return totalCost;
}

int main()
{
    vector<int> arr = {3, 5, 2, 1, 9, 6};
    int result = findTotalCost(arr);
    cout << result << "\n";
    // fout.close();
    return 0;
}
