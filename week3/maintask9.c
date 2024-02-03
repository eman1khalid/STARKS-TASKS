#include<stdio.h>
#include"lab1.h"
void main(){
	int num9,num10;
	printf("enter number 1\n");
	scanf("%d",&num9);
	printf("enter number 1\n");
	scanf("%d",&num10);
	fun9(num9,num10);
	printf("enter number 1\n");
	scanf("%d",&num9);
	printf("enter number 1\n");
	scanf("%d",&num10);
	fun9(num9,num10);
	printf("times  call function %d \n",fun9(num9,num10));

}