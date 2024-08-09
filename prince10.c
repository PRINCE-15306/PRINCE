#include <stdio.h>
#include <unistd.h>
int main()
{
    int seconds;
    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &seconds);

    while (seconds > 0)
    {
        printf("%d\n", seconds);
        sleep(2);
        seconds--;
    }
    printf("Countdown completed!\n");
    return 0;
}
