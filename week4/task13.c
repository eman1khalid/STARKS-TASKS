#include<stdio.h>
void main(){
int a[3][10];
for(int i=0;i<3;i++)
{printf("enter grade of class %d\n",i+1);
for(int j=0;j<10;j++){
printf("student %d : ",j+1);
scanf("%d",&a[i][j]);
}}
int cp=0,cf=0,h=a[0][0],l=a[0][0],sum=0;
for(int i=0;i<3;i++){
for(int j=0;j<10;j++){
sum+=a[i][j];
if(a[i][j]>=50)
cp++;
else
cf++;
if(h<a[i][j])
h=a[i][j];
else if(l>a[i][j])
l=a[i][j];
	
}}
int av=sum/30;
printf("1- number of passed students : %d \n2-number of faild students : %d \n",cp,cf);
printf("3-highest grade : %d \n4-lowest grade : %d \n 5-avrage grade : %d",h,l,av);	
	
}