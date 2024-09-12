#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// template <typename t>
// void print(t value) {
//     cout << value << endl;
// }

void print(auto value){
    cout<<value<<endl;
}

//                           virutal table virtual pointer




int main() {

    int a = 0;
    const int b = 10;
    int * const ptr = &a;
    int const * ptr1 = &b;



    print(a);
    print(b);
    print(ptr);
    print(ptr1);

    return 0;

}