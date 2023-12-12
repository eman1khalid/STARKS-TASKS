#include <stdio.h>
void main(void)
{
int x,y;
printf("enter frist number\n");
scanf("%d",&x);
printf("enter second number\n");
scanf("%d",&y);
int sum,sup,mul;
float div;
sum =x+y;
sup=x-y;
mul=x*y;
div=(float)x/y;
printf("sum=%d substraction=%d multiplication=%d div=%0.2f",sum,sup,mul,div);}