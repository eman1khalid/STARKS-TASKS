#include<stdio.h>
void main(){
printf("how many millimeters takahashi's?");
float t;
scanf("%f",&t);
printf("how many millimeters father?");
float f;
scanf("%f",&f);
printf("how many millimeters mother?");
float m;
scanf("%f",&m);
 printf("how many millimeters shampo?");
float l;
scanf("%f",&l);
for(int i=0;;i++)
{if(i%3==0){
l-=f;
if(l<0){
printf("Father");break;}
}else if((i-1)%3==0){
l-=m;
if(l<0){
printf("Mother");break;}
}else{
l-=t;
if(l<0){
printf("takahashi's");break;}
}
	
}
	
	
	
}
	
	
