#include<stdio.h>

int main(){
    int num;
    printf("Enter a natural number : ");
    scanf("%d",&num);
    printf("The sum of natural numbers is %d\n",addNumbers(num));
    return 0;
}

int addNumbers(int n){
    if(n!=0){
        return n + addNumbers(n-1);
    }else{
        return n;
    }
}