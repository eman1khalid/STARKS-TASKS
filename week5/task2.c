#include<stdio.h>
int fun(int *ptr1);
void main(){
int x;
int *ptr=&x;
printf("enter number \n");
scanf("%d",ptr);

int y;
int *ptrfun=&y;
*ptrfun=fun(ptr);
printf("factorial of number equal =%d ",y);
}
int fun(int *ptr1){
if (*ptr1==1)
return 1;
int y=(*ptr1)-1;
return (*ptr1)*fun(&y);	
	
	
}