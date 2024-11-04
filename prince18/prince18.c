#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define NAME_LENGTH 50

int main()
{
    char names[MAX_STUDENTS][NAME_LENGTH];
    char temp[NAME_LENGTH];

    printf("Enter the names of %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) 
     {
        printf("Student %d: ", i + 1);
        fgets(names[i], NAME_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
     }

    for (int i = 0; i < MAX_STUDENTS - 1; i++) 
     {
        for (int j = 0; j < MAX_STUDENTS - i - 1; j++) 
         {
            if (strcmp(names[j], names[j + 1]) > 0) 
             {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
             }
         }
     }

    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) 
     {
        printf("%s\n", names[i]);
     }

    return 0;
}
