#include<stdio.h>

int main(){
    int dividend,divisor,remainder,quotient;
    printf("Enter dividend:");
    scanf("%d",&dividend);
    printf("Enter divisor:");
    scanf("%d",&divisor);

    quotient = dividend/divisor;
    remainder = dividend%divisor;

    printf("The Quotient is %d\n",quotient);
    printf("The Remainder is %d",remainder);
    return 0;
}
