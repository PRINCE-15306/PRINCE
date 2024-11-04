#include <stdio.h>
#define MAX_NOTES 10
#define MAX_LENGTH 100

int Length(char note[]) {
    int length = 0;
    while (note[length] != '\0') {
        length++;
    }
    return length;
}

void reverseNote(char note[], char reversed[]) {
    int length = Length(note);
    for (int i = 0; i < length; i++) {
        reversed[i] = note[length - 1 - i];
    }
    reversed[length] = '\0';
}

int compareNotes(char note1[], char note2[]) {
    int i = 0;
    while (note1[i] != '\0' && note2[i] != '\0') {
        if (note1[i] != note2[i]) {
            return note1[i] - note2[i]; 
        }
        i++;
    }
    return note1[i] - note2[i]; 
}

void copyNote(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
}

void concatenateNotes(char note1[], char note2[], char result[]) {
    int i = 0, j = 0;

    while (note1[i] != '\0') {
        result[j++] = note1[i++];
    }
    
    while (note2[i] != '\0') {
        result[j++] = note2[i++];
    }
    result[j] = '\0'; 
}

int main() {
    char notes[MAX_NOTES][MAX_LENGTH];
    char reversed[MAX_LENGTH], concatenated[MAX_LENGTH];
    int noteCount = 0;
    
    int choice;
    while (1) {
        printf("\nNote-taking Application\n");
        printf("1. Add a note\n");
        printf("2. Calculate length of a note\n");
        printf("3. Reverse a note\n");
        printf("4. Compare two notes\n");
        printf("5. Copy a note\n");
        printf("6. Concatenate two notes\n");
        printf("7. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                if (noteCount < MAX_NOTES) {
                    printf("Enter note %d: ", noteCount + 1);
                    fgets(notes[noteCount], MAX_LENGTH, stdin);
                
                    for (int j = 0; notes[noteCount][j] != '\0'; j++) {
                        if (notes[noteCount][j] == '\n') {
                            notes[noteCount][j] = '\0';
                            break;
                        }
                    }
                    noteCount++;
                } else {
                    printf("Maximum note limit reached.\n");
                }
                break;
            case 2:
                if (noteCount > 0) {
                    int noteIndex;
                    printf("Enter note index (0 to %d): ", noteCount - 1);
                    scanf("%d", &noteIndex);
                    if (noteIndex >= 0 && noteIndex < noteCount) {
                        int length = Length(notes[noteIndex]);
                        printf("Length of note %d: %d\n", noteIndex, length);
                    } else {
                        printf("Invalid index.\n");
                    }
                } else {
                    printf("No notes available.\n");
                }
                break;
            case 3:
                if (noteCount > 0) {
                    int noteIndex;
                    printf("Enter note index to reverse (0 to %d): ", noteCount - 1);
                    scanf("%d", &noteIndex);
                    if (noteIndex >= 0 && noteIndex < noteCount) {
                        reverseNote(notes[noteIndex], reversed);
                        printf("Reversed note %d: %s\n", noteIndex, reversed);
                    } else {
                        printf("Invalid index.\n");
                    }
                } else {
                    printf("No notes available.\n");
                }
                break;
            case 4:
                if (noteCount > 1) {
                    int index1, index2;
                    printf("Enter first note index (0 to %d): ", noteCount - 1);
                    scanf("%d", &index1);
                    printf("Enter second note index (0 to %d): ", noteCount - 1);
                    scanf("%d", &index2);
                    if (index1 >= 0 && index1 < noteCount && index2 >= 0 && index2 < noteCount) {
                        int result = compareNotes(notes[index1], notes[index2]);
                        if (result == 0) {
                            printf("Notes are equal.\n");
                        } else if (result < 0) {
                            printf("Note %d is less than note %d.\n", index1, index2);
                        } else {
                            printf("Note %d is greater than note %d.\n", index1, index2);
                        }
                    } else {
                        printf("Invalid indices.\n");
                    }
                } else {
                    printf("Not enough notes to compare.\n");
                }
                break;
            case 5:
                if (noteCount > 0) {
                    int sourceIndex, destIndex;
                    printf("Enter source note index (0 to %d): ", noteCount - 1);
                    scanf("%d", &sourceIndex);
                    printf("Enter destination note index (0 to %d): ", noteCount - 1);
                    scanf("%d", &destIndex);
                    if (sourceIndex >= 0 && sourceIndex < noteCount && destIndex >= 0 && destIndex < noteCount) {
                        copyNote(notes[sourceIndex], notes[destIndex]);
                        printf("Copied note %d to note %d.\n", sourceIndex, destIndex);
                    } else {
                        printf("Invalid indices.\n");
                    }
                } else {
                    printf("No notes available to copy.\n");
                }
                break;
            case 6:
                if (noteCount > 1) {
                    int index1, index2;
                    printf("Enter first note index (0 to %d): ", noteCount - 1);
                    scanf("%d", &index1);
                    printf("Enter second note index (0 to %d): ", noteCount - 1);
                    scanf("%d", &index2);
                    if (index1 >= 0 && index1 < noteCount && index2 >= 0 && index2 < noteCount) {
                        concatenateNotes(notes[index1], notes[index2], concatenated);
                        printf("Concatenated note: %s\n", concatenated);
                    } else {
                        printf("Invalid indices.\n");
                    }
                } else {
                    printf("Not enough notes to concatenate.\n");
                }
                break;
            case 7:
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}
