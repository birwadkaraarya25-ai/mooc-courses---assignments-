#include <stdio.h>
void main(void)
{
    int age;
    float height;
    double salary;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);

    printf("\n--- User Details ---\n");
    printf("Age    : %d years\n", age);
    printf("Height : %.2f meters\n", height);
    printf("Salary : %.2lf\n", salary);
    printf("Grade  : %c\n", grade);

}
