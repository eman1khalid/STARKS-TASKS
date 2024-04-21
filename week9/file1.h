

struct list1 *headl=NULL;
void add(){
	struct list1 *ptr1=NULL;
	struct list1 *current=NULL;
	if(headl==NULL){
	ptr1=(struct list1*)malloc(sizeof(struct list1));
	printf("Enter Id :\n");
	scanf("%d",&ptr1->id);
	headl=ptr1;
	members(ptr1);
	ptr1->nextl=NULL;}
	else {
	current=headl;
	while(current->nextl!=NULL){
		printf("hi---");
	current=current->nextl;}
	current->nextl=(struct list1*)malloc(sizeof(struct list1));
	current=current->nextl;
	printf("Enter Id :\n");
	scanf("%d",&current->id);
	members(current);
	current->nextl=NULL;}
	}
	/******************************/
	void listmember(){
	struct list1 * current=NULL;
	current=headl;
	if(current==NULL){
	printf("There is no clients yet\n");}
	else
	{printf("----------Clients---------- \n");

    do{printf("client Id : %d\n",current->id);
	membersfamily(current);
	current=current->nextl; }while(current);	
	}}
	/*********************************
	*********************************/
	