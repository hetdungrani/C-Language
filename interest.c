#include <stdio.h>
void main()
{
    float amount, rate, duration, I;
    printf("Enter Amount:");
    scanf("\n%f", &amount);
    printf("Enter Rate:");
    scanf("\n%f", &rate);
    printf("Enter Duration:");
    scanf("\n%f", &duration);
    I = (amount * rate * duration) / 100;
    printf("Interest = %f", I);
}