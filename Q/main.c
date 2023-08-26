#include <stdio.h>
#include <stdlib.h>
typedef struct Q
{
    int tail;
    int arr[5];
} Q_T;
void Q_intilization(Q_T*queuei)
{
    queuei->tail=0;
}
void Enqueue(Q_T*queuei,int num)
{
    queuei->arr[queuei->tail]=num;
    queuei->tail++;

}
/*void dequeue(Q_T*queue,int d)
{
    queue->arr[queue->remove]=d;
    for(int i=0;i<queue->tail-1;i++)
   {
    queue->arr[i]=queue->arr[i+1];
   }
   queue->tail--;
queue->remove++;
}
*/
void another_dequeue(Q_T*queueptr,int*empty)
{
   *empty=queueptr->arr[0] ;
   for(int i=0;i<queueptr->tail-1;i++)
   {
    queueptr->arr[i]=queueptr->arr[i+1];
   }
   queueptr->tail--;
}


int main()
{
    int target=0;
    Q_T Q_main;
    Q_intilization(&Q_main);
    printf("%d\n",Q_main.tail);
    Enqueue(&Q_main,10);
    Enqueue(&Q_main,20);
    Enqueue(&Q_main,30);
    Enqueue(&Q_main,90);
    Enqueue(&Q_main,60);

    for(int i=0;i<5; i++)
    {
        printf("%d\t",Q_main.arr[i]) ;
    }
    printf("\n");
    another_dequeue(&Q_main,&target);
    another_dequeue(&Q_main,&target);
    Enqueue(&Q_main,100);
    //Enqueue(&Q_main,900);
for(int i=0;i<Q_main.tail; i++)
    {
        printf("%d\t",Q_main.arr[i]) ;
    }

    return 0;
}
