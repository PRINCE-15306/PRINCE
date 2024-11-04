#include <stdio.h>
#define MAX_STUDENTS 100
void Message() 
{
    printf("Welcome to CHARUSAT University!\n");
    printf("===============================\n");
}


int Number_Of_Students() 
{
    int numStudents;
    printf("Enter the number of students : ", MAX_STUDENTS);
    scanf("%d", &numStudents);
    
    if (numStudents < 1 || numStudents > MAX_STUDENTS) {
        printf("Invalid number of students. Setting to 0.\n");
        return 0;
    }
    
    return numStudents;
}

float Average_Grade(int numStudents) {
    float grades[MAX_STUDENTS];
    float sum = 0.0;

    printf("Enter the grades for calculating the average :\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &grades[i]);
        sum += grades[i];
    }
    
    return sum / numStudents; 
}

int main() 
{
    Message();
    
    int numStudents = Number_Of_Students();
    if (numStudents > 0) {
       
        
        float average = Average_Grade(numStudents);
        printf("The average grade is: %.2f\n", average);
    }

    return 0;
}
