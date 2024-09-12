#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v1 = {2, 4, 6, 8, 12, 14, 18};
    v1.push_back(10);
    v1.push_back(10);
    cout << v1.size() << endl
         << v1.capacity() << endl;

    v1.pop_back();
    v1.pop_back();
    

    v1.insert(v1.begin() + 6, 5);
    v1.insert(v1.end() -1, 99);

    v1.erase(v1.begin());

    v1.shrink_to_fit();
 
    cout << v1.size() << endl
         << v1.capacity() << endl;

    
    for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
    {
        cout << *i << " ";
    }

   /* 
    for(auto i:v1) cout<<i<<" ";
    
    OR

   for(int i=0;i< v1.size();i++)     another way of iterating
        cout<<v1[i]<<" ";       */
}