#include <stdio.h>
void main()
{
    
    int m1, m2, m3, m4,m5,G;
    float g;
    printf("Enter A First Subjects = ", m1);
    scanf("%d", &m1);
    printf("Enter A Second Subjects = ", m2);
    scanf("%d", &m2);
    printf("Enter A Thired Subjects = ", m3);
    scanf("%d", &m3);
    printf("Enter A Fourth Subjects = ", m4);
    scanf("%d", &m4);
    printf("Enter A Fifth Subjects = ", m5);
    scanf("%d", &m5);
    G=m1+m2+m3+m4+m5;
    g=G/5;

    if (g < 33)
    {
        printf("  your grade is D \nfail");
    }
    else if (g > 33 && g < 50)
    {
        printf("your grade is C\n");
    }
    else if (g > 50 && g < 80)
    {
        printf("your grade is B\n");
    }
    else
    {
        printf("your grade is A");
    }
}