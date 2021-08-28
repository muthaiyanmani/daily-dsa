#include<stdio.h>

int checkPrimeNumber(int num);
int main(){
    int num1,num2,flag;

    printf("Enter the two limits for PRIME NUMBER : ");
    scanf("%d %d",&num1,&num2);
    
    for(num1;num1<num2;num1++){
        
        flag = checkPrimeNumber(num1);
        if(flag == 1){
            printf("%d ",num1);
        }
    }
    return 0;
}

int checkPrimeNumber(int num){
    int flag = 1;
    for(int i = 2;i<num;i++){
        if(num % i == 0){
            flag = 0;
        }
    }
    return flag;
}