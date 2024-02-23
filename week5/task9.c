#include<stdio.h>
double fun(void *c,int n);
void main(){
double  (*p1)(void *c,int n);
p1=fun;
int n;
printf("enter number 1-5");
scanf("%d",&n);
printf("enter number ");

switch(n){
case 1:
{char v; scanf("%d",&v); printf("cup =%0.2lf ",p1(&v,n));}
case 2:
{int v; scanf("%d",&v); printf("cup =%0.2lf ",p1(&v,n));}
case 3:
{long int v; scanf("%ld",&v); printf("cup =%0.2lf ",p1(&v,n));}
case 4:
{float v; scanf("%f",&v); printf("cup =%0.2lf ",p1(&v,n));}
case 5:
{double v; scanf("%lf",&v); printf("cup =%0.2lf ",p1(&v,n));}


}}
double fun(void *c,int n){
	switch(n)
{   
	case 1:	
	{return (*(char*)c)*(*(char*)c)*(*(char*)c);}
	case 2:
	{return (*(int*)c)*(*(int*)c)*(*(int*)c);}
	case 3:
    {return (*(long int*)c)*(*(long int*)c)*(*(long int*)c);}
	case 4:
	{return (*( float * )c)*(*( float * )c)*(*( float * )c);}
	case 5:
	{ return (*(double *)c)*(*(double *)c)*(*(double *)c);}
    default:{printf("error"); return 0; } 
}
}
	