#include <stdio.h>
int main()
{
    int M=21,p,i;
    printf("--->Welcome To 21 Matchsticks Game<---\n");
    while(1)
    {
        printf("Number of Matchsticks left = %d\n",M);  
        printf("Pick 1-4 matchsticks:\n");  
        scanf("%d", &p); 
    
        if(p > 4 || p < 1 || p > M) 
          {
            printf("Invalid Picks,Pick between1-4");
            continue; 
          }
        M -= p;  
        if(M==0)
          {
             printf("You Picked Last Matchsticks, You Lose!\n");
             break;
          }  
        i = 5- p;
        if(M<=4)
        {
            i=M-1;
        }
        printf("Computer picks matchsticks =%d\n",i);
        M-=i;
        if(M==0)
        printf("Computer Picked Last Matchsticks, You Win!\n");
        
    }
    return 0;
}