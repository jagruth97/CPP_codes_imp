#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("ENter the value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
        printf("Factorial=%d\n",fact);
    }
}