#include<stdio.h>
void main(){
    float PF=10;
    int ME=5000,PT=3000,ES,s;
    printf("Enter Your Salary:");
    scanf("\n%d",&ES);
    s=ES/PF;
    
    printf("Total Salary :%d",(s-ME)-PT);
}