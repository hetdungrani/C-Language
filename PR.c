#include<stdio.h>
void main(){
 int m1,m2,m3,m4,m5,sum;
 float pr;

 printf("Enter M1:");
 scanf("%d",&m1);
 printf("Enter M2:");
 scanf("%d",&m2);
 printf("Enter M3:");
 scanf("%d",&m3);
 printf("Enter M4:");
 scanf("%d",&m4);
 printf("Enter M5:");
 scanf("%d",&m5);
 sum=m1+m2+m3+m4+m5;
 printf("Your Sum = %d \n",sum);
 pr=sum/5;
 printf("You Achive PR is....%f",pr);
 
}