#include <stdio.h>
#include"stack.h"
#define MAXstack 100;
typedef struct stack{
int top;
entrystack entry[MAXstack];
}Stack;
void creatstack(Stack *ps){ps->top=0;}
void push(entrystack e,Stack *ps){
	ps->entry[ps->top++]=e;
}
void pop(entrystack *pe,Stack *ps){
	*pe=ps->entry[--ps->top];
}
void TopStack(entrystack *pe,Stack *ps){
	*pe=ps->entry[ps->top];
}
int stackempty(Stack*ps){
	if(ps->top==0)return 1
	else return 0;
}
int stackfull(Stack*ps){
return (ps->top==MAXstack);	
	
}
void clearstack(Stack*ps){ps->top=0;}
int stacksize(Stack*ps){
	return ps->top;
}
void traversestack(Stack* ps,void(*pf)(entrystack)){
	for(int i=ps->top;t>0;t--){
		(*pf)(ps->entry[i-1]);
	}
}