#include<stdio.h>
#include "prototype.h"
int main(){
printf("hellow \n");
printf("login in\n");
bb:printf("choose number \n1=>user\n2=>admin \n3=>exit \n");
int x,us,su,me,pa,ad;
scanf("%d",&x);
int g;
if(x==1){
c:us=user();
if(us==0)goto c;
if(us==1){
a: su =subscriber();
if(su==0){printf("error username or paswsword\n");goto a;}
me=menu();
if(su==1)
pa=paymentsu(me);
else if(su==2) printf("please pays with cash the total price %d",me);
}
}
else if(x==2){
aa: ad=admins();
if(ad==0){printf("error username or paswsword\n");goto aa;}
m:printf("1-view items \n2-edit items\n3-exit\n");

scanf("%d",&g);
if(g==1){
data();goto m;}
else if(g==2){
data();
edit();
data();
fflush(stdin);

}
else if(g==3)return 0;
else goto m;
}
else if(x==3){printf("thank you *exit*");return 0;}
else {printf("error\n"); goto bb;}


} 