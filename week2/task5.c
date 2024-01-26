#include<stdio.h>
void main(){
int num,sum=0,b,a,g,s;
printf("please enter range\n ");
scanf("%d",&a);
scanf("%d",&b);
printf("enter number\n");
scanf("%d",&num);
for(int i=1;i<=num;i++){
g=i;
s=0;
while(g>0){
s+=g%10;
g/=10;	
}
if(s>=a&&s<=b)
sum+=i;
	
}

printf("sum numbers =%d",sum);
	
	
	
	
	
	
}