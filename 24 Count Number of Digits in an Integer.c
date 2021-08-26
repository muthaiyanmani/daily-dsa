#include<stdio.h>

int main(){
    int num,i;
    printf("Enter an integer to find it's Digit : ");
    scanf("%d",&num);
    for(i = 0;num!=0;i++){
        num/=10;
    }
    printf("The no of digit is : %d",i);
    return 0;
}