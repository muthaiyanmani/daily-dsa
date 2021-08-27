#include<stdio.h>

int main(){
    int num,remainder,temp,reverse = 0;
    printf("Enter a number to check Plaindrome or not : ");
    scanf("%d",&num);
    temp = num;
    for(int i = 1;temp!=0;i++){
        remainder = temp % 10;
        reverse = reverse* 10 + remainder;
        temp/=10;
    }
    if(num == reverse){
        printf("Entered number is PALINDROME");
    }else{
        printf("Entered number is NOT a PALINDROME");
    }
    return 0;
}