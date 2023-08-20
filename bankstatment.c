#include<stdio.h>
void main(){
    int AC,OB,A,CB,DA;
    printf("\tWelcome To Student Bank\n\n");
    printf("Enter Your Account Number :");
    scanf("\n%d",&AC);
    printf("Enter Your Opening Balance :");
    scanf("\n%d",&OB);
    printf("Enter Withdrawn Amount:");
    scanf("\n%d",&A);
    CB=OB-A;
    printf("Your Corrent Balance :%d\n",CB);
    printf("Enter Deposit Amount:");
    scanf("\n%d",&DA);
    CB=CB+DA;
    printf("Your Corrent Balance:%d",CB);

}