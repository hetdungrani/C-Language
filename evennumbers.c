#include <stdio.h>
void main()
{
    int num;
    printf("Enter a  start number:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (!(i % 2 == 0))
        {
            printf("%d \n", i);
        }
    }
}