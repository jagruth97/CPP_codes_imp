#include <iostream>
#include <map>

using namespace std;

int main()
{
    string test = "Hey blud, hows it going, me doin just fine, hahaha...";

    map<char, int> freq;

    for (int i = 0; i < test.length(); i++)
    {
        char letter = test[i];

        if (freq.find(letter) == freq.end())
        {
            freq[letter] = 0;
        }
        freq[letter]++;

        // cout<<letter<<", "<< freq[letter]<<endl;
    }

    for (map<char, int>::iterator i = freq.begin(); i != freq.end(); i++)
    {
        cout << i->first << ": " << i->second << endl;
    }
    return 0;
}