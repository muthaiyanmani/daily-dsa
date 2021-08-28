#include<stdio.h>

int main(){
    int sum,minus,mul,div,num1,num2;
    char symbol;
    printf("Choose a Operator to continue ( +, - , * , /) : ");
    scanf("%c",&symbol);
    printf("Enter two Operands to Calculate : ");
    scanf("%d %d",&num1,&num2);
    switch (symbol)
    {
    case '+':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    
    case '-':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    
    case '*':
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
    
    case '/':
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;
    
    default:
        printf("Oops! Something went wrong ");
        break;
    }
    return 0;
}