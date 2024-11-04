#include <stdio.h>
#include <unistd.h>
int main()
{
    int seconds;
    printf("Enter the countdown: ");
    scanf("%d", &seconds);
    while (seconds > 0)
    {
        printf("%d\n", seconds);
        sleep(1);
        seconds--;
    }
    printf("Countdown completed\n");
    return 0;
}
