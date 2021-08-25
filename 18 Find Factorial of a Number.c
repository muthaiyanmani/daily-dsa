#include<stdio.h>

int main(){
    int num, i;
    long long fact = 1;

    printf("Enter the factorial number : ");
    scanf("%d",&num);

    if(num<0){
        printf("OOPS! Enter number greater than Zero.");
    }else{
        for(i = 1;i<=num;i++){
            fact*=i;
        }
        printf("The factorial is %llu",fact);
    }

    return 0;
}