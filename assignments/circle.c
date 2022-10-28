#include<stdio.h>
 
int main() {
 
   float Pi = 3.14, area, ci, rad;
 
   printf("\nEnter radius of circle: ");
   scanf("%f", &rad);
 
   area = Pi * rad * rad;
   printf("\nArea of Circle : %f ", area);
 
   ci = 2 * Pi * rad;
   printf("\nCircumference  : %f\n ", ci);
 
   return 0;
}