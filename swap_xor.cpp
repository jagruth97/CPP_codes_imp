#include <iostream>
using namespace std;

int main(void)
{
    int a=10,b=5;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<endl<<b;
}