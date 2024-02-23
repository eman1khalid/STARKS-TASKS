#include<stdio.h>
int fun (int *n1, int *n2);
void main(){
int a=5;
int b=6;
int *p1=&a;
int *p2=&b;
printf("before calling the function a=%d  b=%d \n",a,b);
fun(&a,&b);
printf("after calling the function a=%d  b=%d \n",a,b);}
int fun(int *n1, int *n2){
(*n1)++;
(*n2)+=20;
printf("inside function *n1=%d n2= %d \n",*n1,*n2);	
}