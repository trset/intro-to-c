#include<stdio.h>
 
int main() {
    int n;
    printf("Enter number\n>>");
    scanf("%d\n",&n);
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("Factorial of %d is %d", n, fact);
    
    return 0;
}
