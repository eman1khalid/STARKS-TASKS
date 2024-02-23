#include<stdio.h>
void main(){
char x='A';
char *ptr=&x;
for (int i=0;i<26;i++){
printf("%c  ",(*ptr)++);
}}