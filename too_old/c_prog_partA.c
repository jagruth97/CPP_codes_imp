//QUAD ETN
#include <stdio.h>
#include <math.h>
int main(void)
{
double a,b,c,root1,root2;
printf(" Please enter a \n");
scanf("%lf",&a);
printf(" Please enter b \n");
scanf("%lf",&b);
printf(" Please enter c \n");
scanf("%lf",&c);
root1 = (-b + sqrt(b*b-4.*a*c) ) / (2.*a);
root2 = (-b - sqrt(b*b-4.*a*c) ) / (2.*a);
printf("\n First root is %lf ",root1);
printf("\n Second root is %lf ",root2);
printf("\n ");
return 0;
}


//CALCULATOR
#include <stdio.h>
int main(){
   char Operator;
   float num1, num2, result = 0;
   printf("Enter any one operator like +, -, *, / : ");
   scanf("%c", &Operator);
   printf("Enter the values of Operands num1 and num2 : ");
   scanf("%f%f", &num1, &num2);
   switch(Operator){
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      default: printf("Invalid Operator ");
   }
   printf("The value = %f", result);
   return 0;
}

//MATRIX MUL
#include<stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], n, i, j, k;
    printf("Enter the value of N (N <= 10): ");
    scanf("%d", & n);
    printf("Enter the elements of Matrix-A: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }
    printf("Enter the elements of Matrix-B: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & b[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Fibonacci
#include <stdio.h>
int main() {
  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}

// Binary Search in C
#include <stdio.h>
int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x)
      return mid;
    if (array[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}
int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}

//STRING
#include <stdio.h>
int s1(char a[]){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}
int compare(char a[],char b[]){
    for(int i=0;a[i]!='\0'||b[i]!='\0';i++){
        if(a[i]!=b[i]){
            return 1;
        }
    }
    return 0;
}
void conti(char a[],char b[],int l1,int l2){
    for(int i=0;i<=l2;i++){
        a[l1+i]=b[i];
    }
    printf("%s",a);
}
int main(){
    char a[10];
    char b[10];
    printf("enter your st1-");
    scanf("%s",a);
    printf("enter your st2-");
    scanf("%s",b);
    int l1=s1(a);
    int l2=s1(b);
    printf("%d",l1);
    int x=compare(a,b);
    if(x==0){
        printf("\nsame");
    }
    else{
        printf("\ndiff");
    }
    printf("\n");
    conti(a,b,l1,l2);
}