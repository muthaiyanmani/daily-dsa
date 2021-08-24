#include<stdio.h>

int main(){
    int num;
    printf("Enter a number to check positive oe negative : ");
    scanf("%d",&num);
    
    if(num == 0){
        printf("You entered a ZERO.");
    }else if(num > 0){
        printf("You entered a POSITIVE NUMBER.");
    }else{
        printf("You entered a NEGATIVE NUMBER");
    }
    return 0;
}