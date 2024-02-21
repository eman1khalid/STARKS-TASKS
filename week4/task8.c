#include<stdio.h>
void main(){
char a[100]={'\0'};
char x;
printf("enter string  ");
gets(a);
printf("enter chracter  ");
scanf(" %c",&x);
int count=0;
for(int i=0;i<100;i++)
{
if(x==a[i]){
count++;}}
printf("the frequency of %c is %d",x,count);}