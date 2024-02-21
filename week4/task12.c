#include<stdio.h>
void main(){


int a[10];
printf("enter numbers \n ");
for(int i=0;i<10 ;i++)
{scanf("%d",&a[i]);}
int max=a[0];
int min=a[0];

for(int i=1;i<10;i++){
if(max<a[i]){
max=a[i];
}
else if(min>a[i]){
min=a[i];

}}
printf("max number %d \n",max);
printf("mim number %d  \n",min);	
}
