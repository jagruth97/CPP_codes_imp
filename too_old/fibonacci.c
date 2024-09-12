#include<stdio.h>
int a=0,b=1,temp,n,i;
int main()
{
    printf("Enter the number of terms to find Fibonacci series:");
    scanf("%d",&n);
    printf("The Fibonacci series:\n");
    fibonacci();
}
int fibonacci()
{
    for (i=0;i<n;i++)
    {
        printf("\n%d",a);
        temp = b;
        b += a;
        a = temp;
    }
}