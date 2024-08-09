#include <stdio.h>
int main()
 {
    int h,v;
    printf("Enter the size of table vertically: ");
    scanf("%d", &h);
    printf("Enter the size of table horizontally: ");
    scanf("%d", &v);

    printf("\nMultiplication Table (%d x %d):\n", h, v);
    for (int i = 1; i <= h; i++)
     {
        for (int j = 1; j <= v; j++)
            {
               printf("%4d", i * j);
            }
        printf("\n");
     }

    return 0;
}
