#include <stdio.h>
#include <stdlib.h>


int fibonacci_sequence(int y);
int main()
{
    int x;
    printf("please enter number = ");
    scanf("%d",&x);
    printf("%d",fibonacci_sequence(x));
    return 0;



}
int fibonacci_sequence(int y)
{
    int x=0,a=1,c;
    printf("%d\t",x);
    printf("%d\t",a);
    if(y==0)
    {
        return 0;
    }
    else
    {
        for (int i=2; i<=y; i++)
        {
            c=a+x;
            x=a;
            a=c;
            printf("%d\t",a);
        }
        return a;
    }
}
