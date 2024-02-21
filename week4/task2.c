#include<stdio.h>
void main(){
int a[5][5];
for(int i=0;i<5;i++){
printf("enter row %d :",(i+1));
for(int j=0;j<5;j++){
scanf("%d",&a[i][j]);
printf("\t");
}
printf("\n");}	
int row[5]={0};
int col[5]={0};
for(int i=0;i<5;i++)
{for(int j=0;j<5;j++)
{
row[i]+=a[i][j];
col[i]+=a[j][i];
}}
printf("row total: ");
for(int i=0;i<5;i++)
{printf("%d ",row[i]);}
printf("\n");
printf("column total: ");
for(int i=0;i<5;i++)
{printf("%d ",col[i]);}}