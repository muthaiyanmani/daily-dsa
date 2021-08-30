#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("GCD of %d and %d is %d\n",num1,num2,gcd(num1,num2));
}

int gcd(int n1,int n2){
    if(n2>0){
        return gcd(n2,n1%n2);
    }else{
        return n1;
    }
}