#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char car[40];
    printf("enter string:");
    gets(car);
    if (strlen(car) < 14)
    {
        printf(" string is lessthan 14");
    }
    else
    {
        printf("string is greaterthan 14");
    }

    return 0;
}