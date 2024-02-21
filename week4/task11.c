#include<stdio.h>
void main(){
char a[100]={'\0'};
char b[100]={'\0'};
printf("enter string 1 ");
gets(a);
printf("enter string 2 ");
gets(b);
int i;
for( i=0;i<100;i++){
if(a[i]=='\0')
break;}
a[i]=' ';
i++;
int j=0;
for(i;i<100;i++){
for (j;j<100;j++)
{a[i]=b[j];
j++;
break;}}
printf("string after concatenation %s",a);}