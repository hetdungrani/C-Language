#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char car[14];
    printf("enter your name :");
    scanf("%s", &car);
    printf("uppercase : %s", strupr(car));

    return 0;
}