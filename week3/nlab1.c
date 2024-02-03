#include<stdio.h>
 int fun9(int n1, int n2){
	 static int x=0;
	printf("avrage %d\n",(n1+n2)/2);
	x++;
	return x;
}