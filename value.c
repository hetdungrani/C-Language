#include<stdio.h>
void main()
{
 int int_size=sizeof(int);
 int float_size=sizeof(float);
 int double_size=sizeof(double);
 int char_size=sizeof(char);
 int longint_size=sizeof(long int);

 printf("size of int %d\n",int_size);
 printf("size of float %d\n",float_size);
 printf("size of double %d\n",double_size);
 printf("size of char %d\n",char_size);
 printf("size of long int %d\n",longint_size);

}