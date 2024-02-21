#include<stdio.h>
void main(){
char a[100]={'\0'};
char b[100]={'\0'};
printf("enter string 1 ");
gets(a);
printf("enter string 2 ");
gets(b);
int count=0;
for(int i=0;i<100;i++)
{
if(b[i]==a[i]){
count++;}
else break;}
if (count==100)printf("string are equal");
else printf("string are not equal");
}