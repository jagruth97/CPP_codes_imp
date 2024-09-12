#include<iostream>
#include<vector>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
   char x[22] {},y[20] {};
   cout<<"Enter:";
   cin.getline(x,20);
   strcpy(y,x);
   cout<<y<<endl;

   for(size_t i{0};i<sizeof(x);++i)
   {
    if(isalpha(x[i]))
    x[i]=toupper(x[i]);
   }
cout<<x<<endl;

cout<<"Result="<<strcmp(y,x)<<endl;
cout<<"result="<<strcmp(x,y)<<endl;

}