#include<stdio.h>
 
int main() {
   int s1, s2, s3, s4, s5, sum, total = 500;
   float per;
 
   printf("\nEnter marks of 5 subjects :\n");
   scanf("\n%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
 
   sum = s1 + s2 + s3 + s4 + s5;
   printf("\nSum : %d", sum);
 
   per = (sum * 100) / total;
   printf("\nPercentage : %.2f\n", per);
 
   return (0);
}
