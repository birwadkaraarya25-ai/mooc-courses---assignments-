#include<stdio.h>
struct employee
{
int id;
char name[50];
int age;
char department[50];
};
void main()
{
  struct employee e;
printf("enter employee id:");
scanf("%d",&e.id);
printf("enter name:");
scanf("%s",e.name);
printf("enter age:");
scanf("%d",&e.age);
printf("enter department:");
scanf("%s",e.department);
printf("\n-----Employee Details-----\n");
printf("id:%d\n",e.id);
printf("name:%s\n",e.name);
printf("age:%d\n",e.age);
printf("department:%s\n",e.department);
}






