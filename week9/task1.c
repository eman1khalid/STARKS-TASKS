#include <stdio.h>
#include <stdlib.h>
int r;
 struct num{
int n;
struct num *next;
};
struct num *head=NULL;
void enter (){
struct num *ptr=NULL;
ptr=(struct num*)malloc(sizeof(struct num));
for(int i=1;i<=r;i++){
if(head==NULL)
	head=ptr;
printf("enter %dth node value : ",i);
scanf("%d",&ptr->n);
printf("\n");
ptr->next=(struct num*)malloc(sizeof(struct num));
ptr=ptr->next;

}}
void middle(){
struct num *ptr=head;
if(r%2==0){
for(int i=1;i<r/2;i++){
ptr=ptr->next;
}
printf("%d \n",ptr->n);
ptr=ptr->next;
printf("%d \n",ptr->n);
}
else{
	for(int i=1;i<=r/2;i++){
ptr=ptr->next;
}
printf("%d \n",ptr->n);
	
}}

void main(){
while(1){
printf("enter the list length : ");
scanf("%d",&r);
printf("\n");
enter();
middle();
}}