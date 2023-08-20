#include<stdio.h>
void main(){
    char name[20],city[10],study[10],item[10];
    int number,pincode;
    printf("Enter Your Name:");
    scanf("\n%s",&name);
    printf("Enter Your Phone Number:");
    scanf("\n%d",&number);
    printf("Enter Your City:");
    scanf("\n%s",&city);
    printf("Enter Your City Pincode Number:");
    scanf("\n%d",&pincode);
    printf("Enter Your Favorite Item:");
    scanf("\n%s",&item);
    printf("What's Your Education:");
    sscanf("\n%s",&study);
}