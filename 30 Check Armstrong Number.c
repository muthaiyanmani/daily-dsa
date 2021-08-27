#include<stdio.h>

int main(){
    int num,remainder,pow = 0,temp;
    printf("Enter a number to check ARMSTRONG : ");
    scanf("%d",&num);
    temp = num;
    for(int i = 0;temp!=0;i++){
        remainder = temp % 10;
        pow += remainder * remainder * remainder;
        temp/=10;
    }
    if(num == pow){
        printf("Yes! ARMSTRONG NUMBER");
    }else{
        printf("Not a ARMSTRONG NUMBER");
    }
    return 0;
}