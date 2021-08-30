#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The factorial is : %d\n",factorial(num));
    return 0;
}

int factorial(int n){
    if(n!=1){
        return n*factorial(n-1);
    }else{
        return n;
    }
}