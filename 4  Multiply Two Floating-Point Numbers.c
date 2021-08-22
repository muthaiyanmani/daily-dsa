#include<stdio.h>

int main(){

    double a,b,result;

    printf("Enter two floating values a & b:");
    scanf("%lf %lf",&a,&b);
    result = a * b;
    printf("The result of %lf * %lf = %.2lf",a,b,result);
    return 0;
}