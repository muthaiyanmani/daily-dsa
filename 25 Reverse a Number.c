#include<stdio.h>

int main(){
    int i,num,rev = 0,remainder;
    printf("Enter a number to reverse : ");
    scanf("%d",&num);

    for(i = 0; num!= 0;i++){
        remainder = num%10;
        rev = (rev * 10) + remainder;
        num/=10;
    }
    printf("The reverse of a number is %d",rev);
}