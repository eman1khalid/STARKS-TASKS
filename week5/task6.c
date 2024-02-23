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
int x;


for(int i=1;i<size;i++){
for(int j=0;j<i;j++){
if(*(ptr+i)<*(ptr+j)){
x=*(ptr+i);
*(ptr+i)=*(ptr+j);
*(ptr+j)=x;

}}}
for(int i=0;i<size;i++){
printf("%d  ",*(ptr+i));
}
	 
	 
 }