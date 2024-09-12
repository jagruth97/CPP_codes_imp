#include<stdio.h>
int main()
{
    int i,j,m,n,l;
    static int mt[10][10],nt[10][10],a[10][10];
    printf("Enter the order of the 1st matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the order of the 2nd matrix:\n");
    scanf("%d %d",&n,&l);
    printf("Enter the coefficients of 1st matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mt[i][j]);
        
        }
    }
    printf("Enter the coefficients of 2nd matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&nt[i][j]);
        
        }
    }
    
    //mat multiplication
    for(i=0;i<m;i++)
    {
        for(l=0;l<n;l++)
        {
            a[10][10]=0;
        for(j=0;j<n;j++)
        {
            
            {
                a[m][l]+=mt[m][n]*nt[n][l];
            }
}}}
for(i=0;i<m;i++)    
{    
for(j=0;j<l;j++)    
{   
 
printf("%d\t",a[m][n]);    
}    
printf("\n");    
}    
return 0; 
}


/*
printf("The given 1st matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mt[i][j]);
        
        }
        printf("\n");

    }
       printf("The given 2nd matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d\t",nt[i][j]);
        
        }
        printf("\n");

    }
    */