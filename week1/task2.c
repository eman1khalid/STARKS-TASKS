#include <stdio.h>
void main(void)
{
float x,y;
printf("enter frist number\n");
scanf("%f",&x);
printf("enter second number\n");
scanf("%f",&y);
printf("before swap frist number is %0.2f second number is %0.2f\n",x,y);
float z;
z=y;
y=x;
x=z;
printf("after swap frist number is %0.2f second number is %0.2f",x,y);
}