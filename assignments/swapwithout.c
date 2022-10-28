#include<stdio.h>  
int main(){    
    
    int a=10, b=20;      
    printf("Before swap a=%d b=%d",a,b);      
    // a=a+b;
    // b=a+b-b = a;
    // a=a+b-a = b;
    a = a + b;
    b = a - b;
    a = a - b;
    // a=5, b=3
    // a = a ^ b; // a = 6, b = 3
    // b = a ^ b; // a = 6, b = 5
    // a = a ^ b; // a = 3, b = 5
    printf("\nAfter swap a=%d b=%d\n",a,b);    
    return 0;  
}   