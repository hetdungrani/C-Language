#include <stdio.h>
int main()
{
    int n, rev, a;
    printf("enter 2 digits number:");
    scanf("%d", &n);
    while (n != 0)
    {
        /* code */
        a = n % 10;
        rev = rev * 10 + a;
        n = n / 10;
    }

    printf("%d", rev);
}