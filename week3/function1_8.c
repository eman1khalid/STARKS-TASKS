#include<stdio.h>
/*function task1*/
int fun1(int x,int i){
	if(x>0)
	return x%10*i+(fun1(x/10,i/10));	
    else return 0;}
	/*function task2*/
	unsigned long long int fun2(unsigned int x){
	long long int t1=0,t2=1;
	long long int t3=t1+t2;
	for(int i=3;i<x;i++){
	t1=t2;
	t2=t3;
	t3=t1+t2;
	}
	return t3;}
	unsigned long long int largefun2(){
	unsigned long long int t1=0,t2=1;
	long long int t3=t1+t2;
	while(t3>0)
	{t1=t2;
	t2=t3;
	t3=t1+t2;
	}return t2;}
	/*function task3*/
	void fun3(int x){
	int a[8];
    for(int i=0;i<8;i++){
	a[i]=x%2;  x/=2;}	
	for(int i=7;i>=0;i--){
	printf("%d",a[i]);}
	printf("\n");}
	/*function task4*/
	void fun4(){
	int sum;
	for(int i=2;i<=100;i++){
	sum=0;
	for(int j=1;j<i;j++){
    if(i%j==0)sum+=j;}
	if(sum==i)
	printf("%d ",i);
	}printf("\n");}
	/*function task5*/
	void fun5(int x){
		int n=0;
		for(int i=1;i<=x;i++){
		if(x%i==0)
		n++;}
	    if(n==2)printf("number is prime\n");
        else printf("number is not prime\n");}
	/*function task6*/
	unsigned int foo(unsigned int n,unsigned int r){
	if(n>0) return (n%r)+foo(n/r,r);
	else return 0;
	}
	/*function task7*/
	char qualitypoints(int i){
	if(i>=90)
	return 4;
    else if(i>=80)
	return 3;
    else if(i>=70)
	return 2;
    else if(i>=60)
	return 1;
    else 
	return 0;
	}
	/*function task8*/
	float fun8(float n1,float n2,float n3){
	if(n1<n2){
		if(n1<n3)return n1;
	    else return n3;}
	else {
		if(n2<n3)return n2;
	    else return n3;}
	
	}