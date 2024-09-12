#include <iostream>
#include <vector>
// using namespace std;

int main()
{
    std::vector<int> prev;
    std::vector<int> curr = {1, 1};

    for(int i:curr)
        std::cout<<i<<" ";
    std::cout<<std::endl;

    int n = 10;
    for (int i = 0; i < n; i++)
    {
        prev = curr;
        curr = {1};
        for (int j = 0; j < prev.size() - 1; j++)
        {
            curr.push_back(prev[j] + prev[j + 1]);
        }
        curr.push_back(1);

        for (auto j : curr)
            std::cout << j << " ";
        std::cout << std::endl;
    }

    return 0;
}