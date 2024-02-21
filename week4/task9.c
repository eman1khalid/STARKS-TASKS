#include<stdio.h>
void main(){
char a[100]={'\0'};
char x;
printf("enter string  ");
gets(a);
printf("enter chracter  ");
scanf(" %c",&x);

for(int i=0;i<100;i++)
{
if(a[i]==' '){
a[i]=x;}}
printf("the string after replace  %s",a);}