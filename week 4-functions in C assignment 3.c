#include<stdio.h>
float calculateTotal(float m1,float m2,float m3)
{
  return m1+m2+m3;
}
float calculatePercentage(float total)
{
return total/3;
}
void displayResult(int roll_no,char name[],float total,float percentage)
  {
printf("\n----student result----\n");
printf("roll no:%d\n",roll_no);
printf("name:%s\n",name);
printf("total:%f\n",total);
printf("percentage:%f\n",percentage);
}
void main()
{
  int roll_no;
char name[50];
float m1,m2,m3,total,percentage;
printf("enter roll no:");
scanf("%d",&roll_no);
printf("enter name:");
scanf("%s",name);
printf("enter marks of 3 subjects:");
scanf("%f%f%f",&m1,&m2,&m3);
total=calculateTotal(m1,m2,m3);
percentage=calculatePercentage(total);
displayResult(roll_no,name,total,percentage);
}




