#include<stdio.h>
int checkArmstrongNumber(int num);
int checkPrimeNumber(int num);
int main(){
    int num,flag;
    printf("Enter a NUMBER to check ARMSTRONG or PRIME NUMBER : ");
    scanf("%d",&num);

    flag = checkPrimeNumber(num);
    if(flag == 1){
        printf("It is a PRIME NUMBER");
    }else{
        printf("Not a PRIME NUMBER");
    }

    flag = checkArmstrongNumber(num);
    if(flag == 1){
        printf("\nIt is a ARMSTRONG NUMBER");
    }else{
        printf("\nNOT a ARMSTRONG NUMBER");
    }

    return 0;
}

int checkArmstrongNumber(int num){
    int i,remainder,result = 0,temp = num,flag;
    for(i = 1;temp>0;i++){
        remainder = temp % 10;
        result += remainder*remainder*remainder;
        temp /= 10;
    }
    if(result == num){
        flag = 1;
    }else{
        flag = 0;
    }
    return flag;
}

int checkPrimeNumber(int num){
    int i,flag = 1;
    for(i = 2;i<num;i++){
        if(num%i == 0){
            flag = 0;
        }
    }
    return flag;
}
