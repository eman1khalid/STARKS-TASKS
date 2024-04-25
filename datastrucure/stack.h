#define MAXstack 100;
typedef struct stack{
int top;
entrystack entry[MAXstack];
}Stack;
void creatstack(stack*);
void push(entrystack,Stack *);
void pop(entrystack *,Stack *);
void TopStack(entrystack *,Stack *);
int stackempty(stack*);
int stackfull(stack*);
void clearstack(stack*);
int stacksize(stack*);
void traversestack(stack*,void(*)(entrystack));