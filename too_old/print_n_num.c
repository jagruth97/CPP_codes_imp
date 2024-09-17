#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("ENter the value of N:");
    scanf("%d",&n);
    int arr[n+1];
    arr[0] = 1, arr[1] = 1;
    for(i=2;i<=n;i++)
    {
        arr[i] = arr[i-1] * i;
    }
        printf("Factorial=%d\n",arr[n]);
}