#include<stdio.h>
int fun1(char *ptr1 ,char *ptr2);
void main(){
char str1[100]={'\0'};
char str2[100]={'\0'};
char *ptr1=str1;
char *ptr2=str2;
gets(ptr1);
gets(ptr2);
int (*ptrfun)(char *ptr1 ,char *ptr2);
ptrfun=fun1;
int z=ptrfun(ptr1,ptr2);
if(z>=0)
printf("frist occurence of %s at index %d",ptr2,z);
else printf("no occurence"); 

}
int fun1(char *p1 ,char *p2){
int x=-1,z=0;

for(int j=0;j<100;j++){
for(int i=z;i<100;i=z){
if((*(p2+i)!=*(p1+j))&& (i==0)){break;}
else if((*(p2+i)== *(p1+j))&& (i==0)){x=j; z++; break;}
else if((*(p2+i)=='\0')&& x!=-1) {return x;}
else if((*(p2+i)== *(p1+j))&& (i!=0)){z++; break;}

else if(*(p2)==*(p1+j)){z=1;x=j; break;}
break;


}
if(j==99) return -1;}
	}