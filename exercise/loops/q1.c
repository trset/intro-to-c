/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every
hour worked above 40 hours. Assume that employees do not
work for fractional part of an hour.*/

#include <stdio.h>
int main(){
    //loop for 10 employees 
    //get their no. of hours as input
    //calculate overtime pay
    //add to sum
    //print
    float sum = 0;
    int hrs = 0, overtime;
    float pay ;

    for (int i = 0; i < 2; i++){
        //hours
        printf("enter number of hours =>  ");
        scanf("%d",&hrs);     
        if(hrs>40){
            overtime = hrs - 40;
            pay = overtime * 12.00;
            sum = sum + pay;
            printf("overtime pay => %.2f\n",pay);
        }
        else{
            printf("no overtime pay\n");
        }
    }
    
    printf("sum is => %.2f\n", sum);
    
}