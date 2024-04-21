#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"file2.h"
#include"file1.h"
void main(){
	int t;
	while(1){
	printf("          *****welcome*****          \n");
	printf("1-List clients\n");
	printf("2-Add New client\n");
	
	scanf("%d",&t);
	if(t==1){
	listmember();
	}
	else if (t==2) {
	add();
	}
	
	
    else printf("error \n");
	printf("Run again?\n");
	printf("1-yes\n");
	printf("2-no\n");
	scanf("%d",&t);
	if(t==2)break;
} printf("******* thank :) *******\n");
	
	
}