#include<stdio.h>

int main(){
    int a,b,sum;
    printf("Enter two integers a & b: ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("The sum of %d + %d = %d",a,b,sum);
    return 0;
}