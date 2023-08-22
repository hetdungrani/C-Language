#include <stdio.h>
int main()
{
    int year;
    printf("enter year:");
    scanf("\n%d", &year);
    if (year % 4 == 0)
    {
        printf("this year is leap year");
    }
    else
    {
        printf("this year is not leap year");
    }
}