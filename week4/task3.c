#include<stdio.h>
void main(){
int size ;
printf("enter size of array \n ");
scanf("%d",&size);
int a[size];
printf("enter elments of array \n ");
for(int i=0;i<size ;i++)
{scanf("%d",&a[i]);}
int max=a[0];
int min=a[0];
int pmax=1,pmin=1;
for(int i=1;i<size;i++){
if(max<a[i]){
max=a[i];
pmax=i+1;}
else if(min>a[i]){
min=a[i];
pmin=i+1;
}}
printf("max number %d and positions %d \n",max, pmax);
printf("mim number %d and positions %d \n",min,pmin);	
}
