#include<stdio.h>
void main(){
int x1,x2,x3,x4;
printf("enter row and columns of one matrix \n");
scanf("%d %d",&x1,&x2);
printf("enter row and columns of two matrix \n");
scanf("%d %d",&x3,&x4);
if(x2!=x3)
printf("can't multication");
else{
int a[x1][x2],b[x3][x4];
int d[x1][x4];

printf("enter elemets matrix 1 \n");
for(int i=0;i<x1;i++)
{for (int j=0;j<x2;j++){
scanf("%d",&a[i][j]);
}}
printf("enter elemets matrix 2\n");
for(int i=0;i<x3;i++)
{for (int j=0;j<x4;j++){
scanf("%d",&b[i][j]);
}}	
for(int i=0;i<x1;i++){
for(int j=0;j<x4;j++){
	d[i][j]=0;
}}
for(int i=0;i<x1;i++){
for(int k=0;k<x2;k++){
for(int j=0;j<x4;j++){
d[i][j]+=a[i][k]*b[k][j];
}}}
for(int i=0;i<x1;i++){
for(int j=0;j<x4;j++){
printf("%d",d[i][j]);
printf("\t");}
printf("\n");}

}}