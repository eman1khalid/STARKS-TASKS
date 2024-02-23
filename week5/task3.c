#include<stdio.h>
void fun1(int *x,int *y, int *sum,int *d, int *p);
void main(){
int x,y;
int sum,d,p;
int *ptr1=&x,*ptr2=&y;
printf("enter the number 1 :");
scanf("%d",ptr1);
printf("enter the number 2 :");
scanf("%d",ptr2);
void (*ptrfun)(int *x,int *y,int *sum,int *d,int *p);
ptrfun=fun1;
ptrfun(ptr1,ptr2,&sum,&d,&p);
printf("sum = %d Difference = %d product = %d",sum,d,p);
}
void fun1(int *x,int *y, int *sum,int *d, int *p){
*sum=(*x)+(*y);
*d=(*x)-(*y);
*p=(*x)*(*y);
}