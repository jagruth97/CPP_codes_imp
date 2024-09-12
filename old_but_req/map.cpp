#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> m1 = {
        {'A', 1},
        {'J', 10},
        {'a', 21},
    };
    cout << m1['J'] << endl; /* if doesnt exist, returns 0*/

    m1['K'] = 11;
    cout << m1['K'] << endl;

    int n,a,b;
    cout<<"Enter the number of elements you want to enter"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        m1.insert(pair<int,int>(a,b));
    }
    

    m1.insert(make_pair<char, int>('S', 22));
    cout << m1['S'] << endl;

    pair<char, int> p1('j', 121);
    cout<<"P1.First:"<<get<0>(p1)<<endl;
    m1.insert(p1);

    m1.erase('j');
    cout << m1['j'] << endl;

    cout << "Size:" << m1.size() << endl;

    for (map<char, int>::iterator i = m1.begin(); i != m1.end(); ++i)
    {
        cout << i->first << " ";
        cout << i->second << " ";
        cout<<endl;
        
    }

    m1.clear();
    cout << "\nisEmpty:" << m1.empty();

    return 0;
}