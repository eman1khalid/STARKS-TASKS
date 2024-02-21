#include<stdio.h>
void main(){
	int x;
	printf("enter number");
	scanf("%d",&x);
	int z;
	printf("how many digits of number");
	scanf("%d",&z);
	int a[z];
	int c;
	for(int i=0;i<z;i++){
	a[i]=x%10;
    x/=10;	
	}
	for(int j=0;j<9;j++){
		int count=0;
	for(int i=0;i<z;i++){
	if(j==a[i])
	count++;
	}
	if(count>1)
	{c++;}}
    if (c>0)
    printf("yes");
    else 
    printf("no");
	
}