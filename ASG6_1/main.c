#include <stdio.h>
#include <stdlib.h>
struct ADD
{
    int real, complex;

} N1,N2,addition;
int main()
{
    printf("please enter first complex number\n") ;
    scanf("%d%d",&N1.real,&N1.complex);
    printf("please enter second complex number\n") ;
    scanf("%d%d",&N2.real,&N2.complex);
    addition.real=N1.real+N2.real;
    addition.complex=N1.complex+N2.complex;
    printf("addition two number complex = %d + %d i",addition.real,addition.complex);

    return 0;
}
