#include <stdio.h>
int main()
{
    int a=5;
    printf("Enter the 5 number:\n");
    scanf("%d", &a);
    int num [a];
    int positive=0,negative=0,even=0,odd=0;
   for (int i = 0; i < 5; i++)
    {
      scanf("%d", &num[i]);
     if ( num[i] > 0) 
         {
            positive++;
         } 
      else if (num[i] < 0) 
         {
            negative++;
         }
     if (num[i] % 2 == 0) 
         {
            even++;
         } 
      else 
         {
            odd++;
         }
    }
    printf(" positive numbers: %d\n", positive);
    printf(" negative numbers: %d\n", negative);
    printf(" even numbers: %d\n", even);
    printf(" odd numbers: %d\n", odd);

    return 0;
}