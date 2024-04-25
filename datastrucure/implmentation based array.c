#include <stdio.h>
#include"stack.h"
void creatstack(stack*ps){ps->top=0;}
void push(entrystack e,Stack *ps){
	ps->entry[ps->top++]=e;
}
void pop(entrystack *pe,Stack *ps){
	*pe=ps->entry[--ps->top];
}
void TopStack(entrystack *pe,Stack *ps){
	*pe=ps->entry[ps->top];
}
int stackempty(stack*ps){
	if(ps->top==0)return 1
	else return 0;
}
int stackfull(stack*ps){
return (ps->top==MAXstack);	
	
}
void clearstack(stack*ps){ps->top=0;}
int stacksize(stack*ps){
	return ps->top;
}
void traversestack(stack* ps,void(*pf)(entrystack)){
	for(int i=ps->top;t>0;t--){
		(*pf)(ps->entry[i-1]);
	}
}