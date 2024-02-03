#include<stdio.h>
int x=5;
void main (){
int z=5;
printf("z=%i\n ",z);
{
printf("z=%i\n ",z);
z=6;
printf("z=%i\n ",z);
z=7;
printf("z=%i\n ",z);	
}
printf("z=%i\n ",z);
}