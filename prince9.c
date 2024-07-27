#include <stdio.h>
int main() 
{
    int marks;
    char grade;
    printf("Enter correct marks: ");
    scanf("%d", &marks);

    if (marks <0 || marks > 100)
     {
        printf("Enter Correct Mark Between 0-100\n");
     } 
     else 
     {
        grade = (marks >= 90) ? 'A' :
                (marks >= 80) ? 'B' :
                (marks >= 70) ? 'C' :
                (marks >= 60) ? 'D' : 'F';
        printf("The student's grade is: %c\n", grade);
     }

    return 0;
}
