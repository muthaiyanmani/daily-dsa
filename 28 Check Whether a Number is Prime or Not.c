#include<stdio.h>

int main(){
    int i,num,flag = 0;
    printf("Enter a number to check PRIME NUMBER : ");
    scanf("%d",&num);
    if(num>1){
        for(i = 2 ; i< num; i++){
            if(num%i == 0){
                flag = 1;
            }
        }
        if(flag == 1){
            printf("Not a PRIME NUMBER");
        }else{
            printf("It is a PRIME NUMBER");
        }

    }else{
        printf("Enter a valid number or greater than ZERO.");
    }
    return 0;
}