#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node_t;
typedef struct head
{
    node_t*top;
}head_t;
void list_intilization(head_t*inti)
{
    inti->top=NULL;
}
void list_push(head_t *h,int d)
{
    node_t*nptr=(node_t*)malloc(sizeof(node_t));
    nptr->data=d;
    nptr->next=h->top;
    h->top=nptr;
}
void list_pop(head_t *h,int*empty)
{
    node_t*nptr=h->top;
    *empty=nptr->data;
    //*empty=h->top->data;
    h->top=nptr->next;
    free(nptr);
}
void list_print(head_t*hh)
{
    node_t*nptr=hh->top;
    while(nptr!=NULL)
    {
        printf("%d\t",nptr->data);
        nptr=nptr->next;
    }
}
int main()
{
head_t top;
int target;
list_intilization(&top);
list_push(&top,15);
list_push(&top,25);
list_push(&top,35);
//list_pop(&top,&target);
list_pop(&top,&target);
list_push(&top,95);
list_print(&top);
}
/*int main()
{
    int*ptr=(int*)malloc(10*sizeof(int));
    printf("please enter arr\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}
*/
