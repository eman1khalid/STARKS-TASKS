#include<stdio.h>
#include"mcrotask1.h"
void main(){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d\n",sum(x,y));
	printf("%d\n",sub(x,y));
	printf("%d\n",mul(x,y));
	printf("%d\n",div(x,y));
	
}