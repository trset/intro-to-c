#include <stdio.h>
int main(){
    int p, t;
    float r, si;

    printf("\nprincipal\n>> ");
    scanf("%d",&p);

    printf("time (months)\n>> ");
    scanf("%d",&t);

    printf("rate\n>> ");
    scanf("%f",&r);

    si = p*r*t / 1200;

    printf("simple interest = %f\n",si);

    return 0;
}1500