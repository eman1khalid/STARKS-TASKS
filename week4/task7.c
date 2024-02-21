#include<stdio.h>
void main(){
int size;
printf("enter size of array");
scanf("%d",&size);
int a[size];
printf("enter elements of array");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}
for(int j=0;j<size;j++){
	int count=0;
	for(int i=0;i<size;i++){
	if(a[j]==a[i])
	count++;
	}
	if(count==1)
	printf("%d ",a[j]);
	}
    
	
}
	
	
