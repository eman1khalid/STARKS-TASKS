#include<stdio.h>
void main(){
int m,n,max,min,sum;
for(;;){sum=0;
printf("enter range numbers\n");
scanf("%d",&m);
scanf("%d",&n);
if(m<=0||n<=0)break;
if(m>n){max=m;min=n;}
else if(n>m){min=m;max=n;}
for(int i=min;i<=max;i++){
sum+=i;}
printf("sum between %d to %d =%d\n",min,max,sum);
}
	
	
	
	
	
	
	
	
	
}