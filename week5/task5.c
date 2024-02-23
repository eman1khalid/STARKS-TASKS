 # include<stdio.h>
 void main(){
int size;
printf("enter size of array\t");
scanf("%d",&size);
int a[size];
int *ptr=a;
printf("enter elements of array\n");
for(int i=0;i<size;i++){
scanf("%d",(ptr+i));}
int b[size];
int *ptr1=b;
for(int i=0;i<size;i++){
*(ptr1+i)=*(ptr+(size-1-i));
}
for(int i=0;i<size;i++){
printf("%d  ",*(ptr1+i));
}
	 
	 
	 
	 
 }