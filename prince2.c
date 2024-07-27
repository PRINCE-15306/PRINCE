#include<stdio.h>
 int main()
 {
     int L,B;
     printf("find area and perimeter for square and rectangle\n");
     printf("ENTER THE L:-\n");
     scanf("%d",&L);
     printf("ENTER THE B:-\n");
     scanf("%d",&B);

     printf("\nThe perimeter is %d",2*(L+B));
     printf("\nThe area is %d", L*B);
     return 0;
 }
