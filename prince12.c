#include <stdio.h>
int main()
{
    int D;
    int EDCost = 200;
    int Total = 0;

    printf("Enter the number of days: ");
    scanf("%d", &D);
    for (int day = 2; day <= D; day += 2) 
    {
        Total += EDCost;
    }
    printf("The total budget of event days is: %d Rs\n", Total);
    return 0;
}
