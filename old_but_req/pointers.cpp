#include <iostream>
using namespace std;
int main(void)
{
    int x = 5;
    int *p, **q, ***r;
    p = &x;
    q = &p;
    r = &q;

    cout << "x val: " << x << endl;
    cout << "p val(addres of x): " << p << endl;
    cout << "deref p: " << (*p) << endl;
    cout << "q val(adrs of p): " << q << endl;
    cout << "*q(addres of x): " << (*q) << endl;
    cout << "deref q: " << (**q) << endl;
    cout << "r val(adrs of q): " << r << endl;
    cout << "*r(adrs of p): " << (*r) << endl;
    cout << "**r(addres of x): " << (*(*r)) << endl;
    cout << "deref r: " << (***r) << endl;
    cout << endl;

    int a[] = {1, 2, 3};
    int *j = a;
    cout << a << endl;
    cout << j << endl;
    cout << ++j;
}