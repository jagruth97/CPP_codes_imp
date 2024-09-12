#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,a[10],mid,low,high,key, found=0;
printf("\n Enter the number of elements:\n");
scanf("%d", &n);
printf("Enter the array element in the ascending order\n");
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
printf("\n Enter the key element to be searched\n");
scanf("%d", &key);


low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
found=1;
break;
}
else if (key>a[mid])
{
    low=mid+1;
}
else
{
    high=mid-1;
}
}

if(found ==1)
{
printf("Item found at position: %d",mid+1); 
}
else
{
    printf("\n Item not found ");
}
}