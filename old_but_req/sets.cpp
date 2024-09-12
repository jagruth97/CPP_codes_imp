#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    set<char> s1= {'z','a','w','y','w'};
    s1.insert('r');
    s1.erase('w');

    if(s1.find('w')== s1.end()){
        cout<<"It doesnt exist"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }

    for(auto itr:s1)
    {
        cout<<itr;
    }
}