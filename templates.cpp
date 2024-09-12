#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class T1, class T2>
class Add
{
    T1 a;
    T2 b;

public:
    Add(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }
    void concat()
    {
        cout << a + b << endl;
    }
};

int main()
{
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if (type == "string")
        {
            string element1, element2;
            cin >> element1 >> element2;
            Add<string, string> obj1(element1, element2);
            obj1.concat();
        }
        else if (type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            Add<int, int> obj2(element1, element2);
            obj2.concat();
        }
        else if (type == "float")
        {
            float element1, element2;
            cin >> element1 >> element2;
            Add<float,float> obj3(element1,element2);
            obj3.concat();
        }
    }
    return 0;
}
