#include<stdio.h>

int main(){
    int num1,num2; // 10, 5

    printf("Enter num1 = ");
    scanf("%d",&num1);
    printf("Enter num2 = ");
    scanf("%d",&num2);

    num1 = num1 - num2; // 10 - 5 = 5
    num2 = num1 + num2; // 5 + 5 = 10
    num1 = num2 - num1; // 10 - 5 = 5

    printf("Swapped value of num1 = %d\n",num1);
    printf("Swapped value of num2 = %d\n",num2);

    return 0;
}