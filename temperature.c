#include<stdio.h>
void main(){
    int f;
    float c;
    printf("Enter Fahrenheit ");
    scanf("%d",&f);
    // printf("Fahrenheit is %d",f);
    c=0.55*(f-32);
    printf("\nFahrenheit convert to Temperature = %f",c);
}   