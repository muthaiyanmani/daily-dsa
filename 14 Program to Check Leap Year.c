#include<stdio.h>

int main(){
    int year;
    printf("Enter a year to check LEAP YEAR : ");
    scanf("%d",&year);
    if((year % 400 == 0) || ((year % 4 == 0) && !(year % 100 == 0))){
        printf("%d is LEAP YEAR.",year);
    }else{
        printf("It is NOT a LEAP YEAR.");
    }
    return 0;
}