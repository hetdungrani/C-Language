#include <stdio.h>
void main()
{
    char X, a,e,i,o,u,U,A,E,I,O;
    printf("enter a charecater ");
    scanf("%c", &X);

    if (X == a || X == e || X == i || X == o || X == u)
    {
        printf("vowels");
    }
    else if(X == A|| X == E || X == I || X == O || X == U){
         printf("conjucthions");
    }
    else{
        printf("no");
    }
   
}