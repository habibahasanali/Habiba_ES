#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char name[100];
    int id;
    float age;
    char section[3];
} s_t;
int main()
{
    s_t student_database[3]= {{"habiba",1003,20,"A1"},{"Amal",1006,18,"B1"},{"mariem",1005,13,"C1"}};
    for(int i =0; i<3; i++)
    {
        printf("\nname is %d %s\n",i+1,student_database[i].name);
        printf("id is %d %d\n",i+1,student_database[i].id);
        printf("age is %d %f\n",i+1,student_database[i].age);
        printf("section is %d %s\n",i+1,student_database[i].section);
        printf("*******8*8*8*888");
    }
    /* for(int i=0;i<3;i++){
         printf("enter name \n");
         scanf("%s",&s[i].name);
         printf("Enter age\n");
         scanf("%f",&s[i].age);
         printf("Enter section\n");
         scanf("%s",&s[i].section);
         printf("Enter id\n");
         scanf("%d",&s[i].id);
     }


    for(int i =0; i<3 ;i++) {
     for(int j=0;j<2;j++){
         if(s[i].id>s[j].id){
         int swap =s[i].id;
         s[j].id=s[i].id;
         s[j].id=swap;
         }
     }
    }
    for(int i=0;i<3;i++){
     printf("name is %s\n",s[i].name);
     printf("id is %d\n",s[i].id);
     printf("age is %f\n",s[i].age);
     printf("section is %s\n",s[i].section);

    }
    */
    return 0;
}
