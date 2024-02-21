#include<stdio.h>
void main(){
int x;
int d,count=0;
printf("enter number");
scanf("%d",&x);
printf("how many digits of number");
scanf("%d",&d);
int a[d];
int b[d];
for(int i=0;i<d;i++){
	a[i]=x%10;
    x/=10;	
	}
for(int i=0;i<d;i++){
b[i]=a[d-i-1];
}
for(int i=0;i<d;i++){
if(a[i]==b[i])
count+=1;
}
if(count==d){
printf("number is palindrom");}
else{
printf("number is not palindrom");
}
	
	
}