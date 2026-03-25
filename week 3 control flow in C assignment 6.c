#include <stdio.h>
void main() 
{
    float marks;
    printf("Enter marks (0-100): ");
    scanf("%f", &marks);
    
    if (marks >= 35) 
    {
        printf("Pass! \n");
        

        if (marks >= 75) 
        printf("Grade: A\n");
        else if (marks >= 60)
        printf("Grade: B\n");
        else
        printf("Grade: C\n");
    }
    else {
        printf("Fail!\n");
    }
    

    int range = marks / 25;
    switch(range) 
    {
        case 4:
        printf("Excellent!\n");
        break;
        case 3:
        printf("Very Good!\n");
        break;
        case 2:
        printf("Good!\n");
        break;
        case 1:
        printf("Needs Improvement\n");
        break;
        default: 
        printf("Enter details\n");
    }
}
