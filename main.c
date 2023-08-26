#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* arr_string[6]={ "i" , "like" , "this " , "program" , "very " , "much" };
    for(int i =5;i>=0;i--){
      printf("%s\t",arr_string[i]) ;
    }
    return 0;
}
