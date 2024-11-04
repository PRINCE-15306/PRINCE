#include <stdio.h>
#include <stdlib.h>

#define ROWS 5    
#define SEATS 6   

int main() 
{
    char seating[ROWS][SEATS];
    int row, seat, numSeats;
    char reserveMore;
    
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < SEATS; j++) 
        {
            seating[i][j] = 'O';
        }
    }
    do {
        printf("How many seats would you like to reserve? ");
        scanf("%d", &numSeats);

        if (numSeats <= 0) {
            printf("Invalid number of seats. Please try again.\n");
            continue;
        }

        for (int i = 0; i < numSeats; i++) {
            printf("Enter row number (1 to %d): ", ROWS);
            scanf("%d", &row);
            printf("Enter seat number (1 to %d): ", SEATS);
            scanf("%d", &seat);

            if (row < 1 || row > ROWS || seat < 1 || seat > SEATS) {
                printf("Invalid seat number %d %d. Please try again.\n", row, seat);
            } else if (seating[row - 1][seat - 1] == 'X') {
                printf("Seat %d %d already reserved. Please choose another seat.\n", row, seat);
            } else {
                seating[row - 1][seat - 1] = 'X'; 
                printf("Seat %d %d reserved successfully.\n", row, seat);
            }
        }

        printf("Do you want to reserve more seats? (y/n): ");
        scanf(" %c", &reserveMore); 

    } while (reserveMore == 'y' || reserveMore == 'Y');

    printf("Updated Seating Chart:\n");
    printf("  ");
    for (int seatNum = 1; seatNum <= SEATS; seatNum++) {
        printf(" ", seatNum);
    }
    printf("\n");

    for (int rowNum = 0; rowNum < ROWS; rowNum++) {
        printf(" ", rowNum + 1);
        for (int seatNum = 0; seatNum < SEATS; seatNum++) {
            printf("%c ", seating[rowNum][seatNum]);
        }
        printf("\n");
    }

    return 0;
}
