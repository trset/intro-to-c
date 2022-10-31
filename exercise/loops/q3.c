/* Two numbers are entered through the keyboard.
Write program to find the value of one number 
raised to the power of another.*/
#include <stdio.h>
int main(){
    int a, b;
    printf("enter first number => ");
    scanf("%d", &a);

    printf("enter second number => ");
    scanf("%d", &b);

    int res = 1;
    for(int i = 1; i<=b; i++){ 
        res = res * a ;

    }
    printf("answer is %d\n", res);

    return 0;

}
