#include <stdio.h>
void main()
{
    int n, sum = 0, a;
    printf("enter five digits number:");
    scanf("%d", &n);
    while (n != 0)
    {
        a = n % 10;
        sum = sum + a;
        n = n / 10;
    }
    printf("%d", sum);
}