#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter  number a ");
    scanf("%d", &a);
  
    printf("enter  number b ");
    scanf("%d", &b);
  
    printf("enter  number c ");
    scanf("%d",&c);
  
    if ((a > b && a > c))
    {
        printf("a greterthan b and c");
    }
    else if ((b > a && b > c))
    {
        printf("b greterthan a and c");
    }
    else
    {
        printf("c greterthan a and b");
    }
    return 0;
}
