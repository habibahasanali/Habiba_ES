#include <stdio.h>
#include <stdlib.h>
int d;
typedef struct stack
{
    int stack_top;

    int arr[5];
}stack_t;
void stack_int(stack_t*stack_p)
{
    stack_p->stack_top=0;
}
void stack_push(stack_t*stack_p,int d)
{
if(stack_p->stack_top!=5){

        stack_p->arr[stack_p->stack_top]=d;
        stack_p->stack_top++;
}
else{
    printf("\ncompletely");
}
}
void stack_pop (stack_t*stack_p,int d)
{

    d=stack_p->arr[stack_p->stack_top];
     stack_p->stack_top--;
    }


int main()
{
stack_t s;
int i;

stack_int(&s);
printf("%d",s.stack_top);
stack_push(&s,10);
stack_push(&s,70);
stack_push(&s,80);
stack_push(&s,90);
stack_push(&s,30);
stack_push(&s,30);
stack_push(&s,30);


printf("\n");
for(i=0;i<s.stack_top;i++){
    printf("\t%d",s.arr[i]);
}
stack_pop(&s,d);
stack_pop(&s,d);
stack_push(&s,100);
printf("\n");
for(i=0;i<s.stack_top;i++){
    printf("\t%d",s.arr[i]);
}
    return 0;
}
