#include<stdio.h>
#include "data.h"
typedef struct{
	u32 salary;
	u32 bonus;
	u32 deduction;
}employees;
void main(){
employees ahmed;
employees waleed;
employees amr;
printf("enter information of waleed\n");
printf("salary: ");
scanf("%d",&waleed.salary);
printf("bonus: ");
scanf("%d",&waleed.bonus);
printf("deduction: ");
scanf("%d",&waleed.deduction);
printf("enter information of ahmed\n");
printf("salary: ");
scanf("%d",&ahmed.salary);
printf("bonus: ");
scanf("%d",&ahmed.bonus);
printf("deduction: ");
scanf("%d",&ahmed.deduction);
printf("enter information of amr\n");
printf("salary: ");
scanf("%d",&amr.salary);
printf("bonus: ");
scanf("%d",&amr.bonus);
printf("deduction: ");
scanf("%d",&amr.deduction);

printf("toral value = %d", ahmed.salary+amr.salary+waleed.salary-ahmed.deduction-amr.deduction-waleed.deduction+ahmed.bonus+amr.bonus+waleed.bonus);



}