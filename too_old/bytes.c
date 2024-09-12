#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    char b;
    float c;
    long int d;
    long long int g;
    double e;
    long double f;

    printf("Mem of char: %d bytes\n", sizeof(b));
    printf("Mem of int: %d bytes\n", sizeof(a));
    printf("Mem of float: %zu bytes\n", sizeof(c));
    printf("Mem of long int: %zu bytes\n", sizeof(d));
    printf("Mem of long long int: %d bytes\n", sizeof(g));
    printf("Mem of double: %d bytes\n", sizeof(e));

    printf("Mem of long double: %d bytes", sizeof(f));
}