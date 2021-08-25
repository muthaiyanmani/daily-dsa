#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter the numbers limit : ");
    scanf("%d",&num);

    for(int i = 0;i<=num;i++){
        sum+=i;
    }
    printf("The sum of natural number is : %d",sum);
    return 0;
}