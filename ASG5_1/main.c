#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    printf("reverse = ");
    for(int i=4;i>=0;i--){
        printf("%d\t,",arr[i]);
    }
    return 0;
}
