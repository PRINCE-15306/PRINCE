#include<stdio.h>
 int main()
 {
     int P,T;
     float R;
     printf("ENTER THE P:\n");
     scanf("%d",&P);
     printf("ENTER THE R:\n");
     scanf("%f",&R);
     printf("ENTER THE T:\n");
     scanf("%d",&T);

     printf("this is simple interest %f", P*R*T/100);
     return 0;
 }
