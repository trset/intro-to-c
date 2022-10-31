/* Write a program to find the factorial value of any number
entered through the keyboard.*/

#include <stdio.h>
int main(){
    int n;
    printf("enter a number => ");
    scanf("%d",&n);

    long long int fact = 1;
    for(int i = 1 ; i <= n; i++){
        fact = fact * i;
    }
    printf("factorial of %d is => %lli\n", n, fact);
   return 0;
}