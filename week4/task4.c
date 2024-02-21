#include<stdio.h>
void main(){
int a[10];
int even=0,odd=1;
printf("enter ten number");
for(int i=0;i<10;i++){
scanf("%d",&a[i]);
if(a[i]%2==0)
even+=a[i];
else
odd*=a[i];
}
printf("sum even numbers=%d & product odd numbers =%d",even,odd);

}