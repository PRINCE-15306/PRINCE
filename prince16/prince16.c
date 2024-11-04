#include <stdio.h>
int main() 
{
    int size;
    printf("Enter the number of items: ");
    scanf("%d", &size);

    if (size <= 0) 
      {
        printf("Invalid number of items.\n");
        return 1;
      }

    float prices[size];
    printf("Enter the prices of the items:\n");

    for (int i = 0; i < size; i++) 
    {
        printf("Price of item %d: ", i + 1);
        scanf("%f", &prices[i]);
    }
    
    int i, j;
    float temp;
    for (i = 0; i < size - 1; i++) 
    {
        for (j = 0; j < size - i - 1; j++) 
        {
          if (prices[j] > prices[j + 1]) 
            {
                temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }
    printf("Prices sorted in ascending order:\n");
  for (int i = 0; i < size; i++) 
    {
        printf("%.2f\n", prices[i]);
    }
    
    return 0;
}
