#include<stdio.h>
void main(){
int x=1000;
int *ptr=&x;
ptr=ptr+1;
printf("%d   %d ",x,*ptr);
}