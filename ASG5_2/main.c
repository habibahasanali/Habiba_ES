#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0 , count=0;
    int arr[5]={10,2,7,4,5};
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    int max=0;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
            count++;
        }

    }
     printf("\nmax = %d \t and\t position = %d",max,count);
     int min=100;
     for(int i =0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
            counter++;
        }
     }
      printf("\nmin = %d \t and\t position = %d",min,counter);
    return 0;
}
