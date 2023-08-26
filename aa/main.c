#include <stdio.h>
#include <stdlib.h>
int odd=0,even=0;
void func(int*arr,int n){
for (int i=0;i<n;i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}

}
int main()
{
int array[10]={2,4,6,8,11,12,14,16,87,66};
func(array,10);
printf("%d\t%d",even,odd);
}
