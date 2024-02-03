#include<stdio.h>
#include<math.h>
int fun1(int x,int i);
unsigned long long int fun2(unsigned int num);
unsigned long long int largefun2();
void fun3(int x);
void fun4();
void fun5(int x);
unsigned int foo(unsigned int n,unsigned int r);
char qualitypoints(int i);
float fun8(float n1,float n2,float n3);
void main(){
	/*task1*/
	printf("out task1\n");
	int num1,size1;
	printf("enter number\n");
	scanf("%d",&num1);
	printf("digits of number\n");
	scanf("%d",&size1);
	int z1=fun1(num1,pow(10,size1)/10);
	printf("number=%d\n",z1);
	/*task2*/
	printf("out task2\n");
	unsigned int num2;
	printf("enter number\n");
	scanf("%d",&num2);
	long long int z2=fun2(num2);
	printf("nth fibonacci number =%llu \n large number %llu \n",z2,largefun2());
	/*task3*/
	printf("out task3\n");
	printf("enter dicimal number\n");
	int num3;
	scanf("%d",&num3);
	fun3(num3);
	/*task4*/
	printf("out task 4\n");
	printf("perfect numbers between 1 to 100 \n");
	fun4();
	/*task5*/
	printf("out task5\n");
	printf("enter number\n");
	int num5;
	scanf("%d",&num5);
	fun5(num5);
	/*task6*/
	printf("out task6\n");
	printf("%u",foo(513,2));
	/*task7*/
	printf("out task7\n");
	printf("enter avrage \n");
	int num7;
	scanf("%d",&num7);
	printf("%d \n",qualitypoints(num7));
	/*task8*/
	printf("out task8\n");
	printf("enter number 1\n");
	float n1;
	scanf("%f",&n1);
	printf("enter number 2\n");
	float n2;
	scanf("%f",&n2);
	printf("enter number 3\n");
	float n3;
	scanf("%f",&n3);
	printf("smallest number = %0.2f \n",fun8(n1,n2,n3));
	
	}
