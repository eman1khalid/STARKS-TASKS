#include <stdio.h>
#include"stack.h"
#include<stdbool.h>
#include <stdlib.h>
typedef struct stack{
	int size;
	stackent *top;
}Stack;
typedef struct ent{
	stackentry entry;
	stackent *next;
}stackent;
void creatstack(Stack*ps){ps->top=NULL; ps->size=0;}
void push(entrystack e,Stack *ps){
	stackent *pn=(stackent *)malloc(sizeof(stackent));
	pn->entry=e;
	pn->next=ps->top;
	ps->top=pn;
	ps->size++;
}
void pop(entrystack *pe,Stack *ps){
	*pe=ps->top->entry;
	stackent *pn=ps->top;
	ps->top=ps->top->next;
	free(pn);
	ps->size--;
}
void TopStack(entrystack *pe,Stack *ps){
	*pe=ps->top->entry;
}
int stackempty(Stack*ps){
	if(ps->top)return 1;
	else return 0;
}
int stackfull(Stack*ps){
return 0;	
	
}
void clearstack(Stack*ps){
stackent *pn=ps->top;
while(ps->top){
	ps->top=ps->top->next;
	free(pn);
	pn=ps->top;
}	
ps->size=0;
	
}
int stacksize(Stack*ps){
	return ps->size;
}
void traversestack(Stack* ps,void(*pf)(entrystack)){
	stackent *pn=ps->top;
	for(int i=0;t<ps->size;t++){
		(*pf)(pn->entry);
		pn=pn->next;
	}
}