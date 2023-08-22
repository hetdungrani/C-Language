#include <stdio.h>
void main()
{
    int n, rev=0, a;
    printf("enter five digits number:");
    scanf("%d", &n);
    a = n % 10;
    rev = rev * 10 + a;
    n = n / 10;

    a = n % 10;
    rev = rev * 10 + a;
    n = n / 10;

    a = n % 10;
    rev = rev * 10 + a;
    n = n / 10;

    a = n % 10;
    rev = rev * 10 + a;
    n = n / 10;

    a = n % 10;
    rev = rev * 10 + a;
    n = n / 10;
    printf("reverse number : %d", rev);
}