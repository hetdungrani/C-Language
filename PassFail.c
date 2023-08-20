#include <stdio.h>
void main()
{
    int m1, m2, m3, m4,G;
    float g;
    printf("Enter A First Subjects = ", m1);
    scanf("%d", &m1);
    printf("Enter A Second Subjects = ", m2);
    scanf("%d", &m2);
    printf("Enter A Thired Subjects = ", m3);
    scanf("%d", &m3);
    printf("Enter A Fourth Subjects = ", m4);
    scanf("%d", &m4);
    G=m1+m2+m3+m4;
    g=G/4;
    printf("Your PR is %f",g);
    if (g < 40)
    {
        printf("Fail");
    }
    else{
        printf("\nPass");
    }
    
}