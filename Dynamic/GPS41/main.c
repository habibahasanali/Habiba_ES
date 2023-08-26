#include <stdio.h>
#include <stdlib.h>
void incr(int*x);
int main()
{
    float x=9.765;
    printf("%p",x);
}
void incr(int*x){
 (*x)++;

}
