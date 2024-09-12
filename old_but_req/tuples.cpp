#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, int> t1,t2;
    t1 = make_tuple(2, 3); /*tuple creation*/
    t2 = make_tuple(4, 9);

    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;

    t1.swap(t2); /* tuples swap */

    cout << "After Swap:"
         << get<0>(t1) << " "
         << get<1>(t1) << endl;

    int x, y;
    tie(x, y) = t1; /* tuple decomposing */

    cout << "TupleDecompose:" << y << " " << x << endl;

    tuple<char, string> t3 = make_tuple('F', "you");

    tuple t4 = tuple_cat(t1, t3);
    // for (int i = 0; i < 4; i++)
        cout << get<3>(t4);
    
    cout<<endl<<tuple_size<decltype(t4)>::value;

    return 0;
}
