#include<stdio.h>
struct list1 {
	int id;
	int num;
	struct family *headd;
	struct list1 *nextl;
	
};
struct family{
char name[10];
int money;
struct family *nextf;	
};
struct family *head2=NULL;
void members(struct list1 *ptr1){
	head2=NULL;
	struct family *ptr2=NULL;
	ptr2=(struct family*)malloc(sizeof(struct family));
	printf("Entet number of family members : ");
	scanf("%d",&ptr1->num);
	printf("\n");
	head2=ptr2;
	ptr1->headd=head2;
	printf("Enter the family member name: ");
	scanf("%s",&ptr2->name);
	printf("Enter the family member money: ");
	scanf("%d",&ptr2->money);
	for(int i=0;i<ptr1->num-1;i++){
		ptr2->nextf=(struct family*)malloc(sizeof(struct family*));
		ptr2=ptr2->nextf;
		printf("Enter the family member name: ");
		scanf("%s",&ptr2->name);
		printf("Enter the family member money: ");
		scanf("%d",&ptr2->money);
		ptr2=NULL;
}

}
void membersfamily(struct list1 *p){
	struct family *current=NULL;
	current=p->headd;
	if(current==NULL){
		printf("There is no members yet\n");
	}
	else{
		for(int i=0;i<p->num;i++){
		printf("member : %s \n",current->name);
		printf("money : %d\n",current->money);
		printf("\n");
		current=current->nextf;}	
	}}
	/**************************************/
	