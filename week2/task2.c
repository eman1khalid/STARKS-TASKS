#include<stdio.h>
void main()
{
printf("new user\n");
int i,id,pas;
printf("enter id\n");
scanf("%d",&id);
printf("enter password\n");
scanf("%d",&pas);
printf("saved successful\n");
printf("login system\n");
printf("enter id\n");
int d,p;
scanf("%d",&d);
if(d==id){
for(i=0;i<3;i++){
printf("password\n");
scanf("%d",&p);
if(p==pas){
printf("welcomes him\n");break;
}else{if(i<2){
printf("pass error please again\n");}
else{
printf("no more tries\n");
}}	
	
}}else{
printf("not registered\n");
}	
}