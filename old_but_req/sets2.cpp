#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    string test = "Hey blud, why are you running";
    string pat = "yo dude";
    set<char> s1;

    for (int i = 0; i < pat.length(); i++)
    {
        s1.insert(pat[i]);
    }

    for (int i = 0; i < test.length(); i++)
    {
        s1.erase(test[i]);
    }

    if (s1.size() > 0)
    {
        cout << "Doesnot have all chars";
    }else{
        cout << "It has all chars";
    }
}