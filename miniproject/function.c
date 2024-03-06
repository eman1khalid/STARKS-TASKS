#include<stdio.h>
#include<string.h>
int m=23,p=45,c=10,co=20,ca=20,mi=78,t=88,cf=56,mm=35;
//user************
int user(){
printf("1-subscriber\n2-guest\n");
int y;
scanf("%d",&y);
if(y==1)
return 1;
else if(y==2)return 2;
else return 0;
}
int subscriber(){
/*data of users*/
int pas1=1234,pas2=0000,pas3=5432,pas4=5555;
char name1[100]={"eman"},name2[100]={"khalid"},name3[100]={"israa"},name4[100]={"mariam"};
/*user*/
fflush(stdin);	
char name[100];
fflush(stdin);
int pas;
printf("enter username:\n");
fflush(stdin);
gets(name);
fflush(stdin);
printf("password: \n");
scanf("%d",&pas);
//check
if(!(strcmp(name,name1))){if(pas==pas1){return 1;}}
if(!(strcmp(name,name2))){if(pas==pas2)return 1;}
if(!(strcmp(name,name3))){if(pas==pas3)return 1;} 
if(!(strcmp(name,name4))){if(pas==pas4)return 1;}else return 0;}
int menu(){
printf("snacks: \n 1-molto 10LE \n 2-biscuits 5LE \n 3-chips 10LE \n 4-cookies 20LE \n ");
printf("how many snacks do you want\n");
int x,sum=0;
scanf("%d",&x);
printf("number corresponds snack\n");
int y;
for (int i=0;i<x;i++){
scanf("%d",&y);
if(y==1)sum+=10;
else if(y==2)sum+=5;
else if(y==3)sum+=10;
else if(y==4)sum+=20;}
printf("drinks:\n 1-cola 15LE \n 2-miranda 15LE \n 3-tea 10LE\n 4-coffee 12LE\n 5-Milk 10LE \n");
printf("how many drinks do you want\n");
int zz=0;
scanf("%d",&x);
printf("number corresponds drink\n");
for(int i=0;i<x;i++){
scanf("%d",&y);
if(y==1)sum+=15;
else if(y==2)sum+=15;
else if(y==3){sum+=10; zz++;}
else if(y==4){sum+=12; zz++;}
else if(y==5){sum+=10; zz++;}
}
if(zz!=0){printf("do you want any add 1-yes 2-no\n");
scanf("%d",&x);
if(x==1){printf("flavors \n 1-likemint 3LE \n 2-strawberry 6LE \n 3-chocolate 2LE\n");
printf("number corresponds flavors\n");
scanf("%d",&y);
if(y==1)sum+=3;
else if(y==2)sum+=6;
else if(y==3)sum+=2;}}
return sum;}
int paymentsu (int x){
/*assume money in card 100*/
if (x>100) printf("sorry card not enough please pays with cash the total price %d",x);
else printf("payment successes and remmaining card 	balance %d",100-x);
}
//admin**************
int admins(){
/*data of admin*/
const int pas1=5672;
const char name1[100]={"salma"};
fflush(stdin);	
char name[100];
fflush(stdin);
int pas;
printf("enter username:\n");
fflush(stdin);
gets(name);
fflush(stdin);
printf("password: \n");
scanf("%d",&pas);
//check
if(!(strcmp(name,name1))){if(pas==pas1){return 1;}}
else return 0;}
int data(){
printf("snacks: \n 1-molto %d pieces \n 2-biscuits %d pieces \n 3-chips %d pieces \n 4-cookies %d pieces \n",m,p,c,co);
printf("drinks:\n 11-cola %d pieces \n 22-miranda %d pieces \n 33-tea %d pieces\n 44-coffee %d pieces\n 55-Milk %d pieces \n",ca,mi,t,cf,mm);}
int edit(){
char x;
b:printf("number corresponds item 1-4 11-55 0-no edit\n"); 
scanf("%d",&x);
if(x==1){printf("number pieces\n");scanf("%d",&m);goto b;}else if(x==2){printf("number pieces\n");scanf("%d",&p);goto b;}else if(x==3){printf("number pieces\n");scanf("%d",&c);goto b;}else if(x==4){printf("number pieces\n");scanf("%d",&co);goto b;}
else if(x==11){printf("number pieces\n");scanf("%d",&ca);goto b;}else if(x==22){printf("number pieces\n");scanf("%d",&mi);goto b;}else if(x==33){printf("number pieces\n");scanf("%d",&t);goto b;}else if(x==44){printf("number pieces\n");scanf("%d",&cf);goto b;}else if(x==55){printf("number pieces\n");scanf("%d",&mm);goto b;}
else if(x==0){printf("edit successes\n");return 0;}
else{ printf("error"); goto b; }

}



	

	

