#include<stdio.h>

int main(){
    int num1,num2,temp;

    printf("Enter num1 = ");
    scanf("%d",&num1);
    printf("Enter num2 = ");
    scanf("%d",&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Swapped num1 = %d\n",num1);
    printf("Swapped num2 = %d",num2);
    
    return 0;
}