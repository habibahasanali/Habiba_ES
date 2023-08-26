#include <stdio.h>
#include <stdlib.h>
struct STUDENT{
char name[100];
int age;
float degree;
int section;

}arr[5];
int main()
{
  for (int i=0;i<5;i++){
    printf("enter data : name ,age,degree,section\n");
    scanf("%s",&arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%f",&arr[i].degree);
    scanf("%d",&arr[i].section);
  }
  for(int i=0;i<5;i++){
    printf("student : %d\n",i+1);
    printf("Name is %s\t",arr[i].name);
    printf("Age = %d\t",arr[i].age);
    printf("Degree = %f\t",arr[i].degree);
    printf("Section = %d\n",arr[i].section);
  }
    return 0;
}
