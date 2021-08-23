#include<stdio.h>

int main(){
    int num1;

    printf("Enter a number to check whether it is odd or even : ");
    scanf("%d",&num1);

    if(num1 % 2 == 0 ){
        printf("It is EVEN NUMBER");
    }else{
        printf("It is ODD NUMBER");
    }
    return 0;
}