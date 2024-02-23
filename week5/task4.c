#include<stdio.h>
void main(){

char str[100]={'\0'};
printf("enter string \t");
gets(str);
int cv=0,cc=0;
int *cvp=&cv,*ccp=&cc;
for(int i=0;i<100;i++)
{if(str[i]=='\0')break;
else if(str[i]=='i'||str[i]=='o'||str[i]=='e'||str[i]=='a'||str[i]=='u'||
str[i]=='A'||str[i]=='E'||str[i]=='U'||str[i]=='I'||str[i]=='O')
(*cvp)++;
else if(str[i]==' ')continue;
else 
(*ccp)++;}
printf("vowels= %d  consonants =%d",*cvp,*ccp);}