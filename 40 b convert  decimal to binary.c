#include<stdio.h>

long long convert(int n);
int main(){
    int num;
    printf("Enter a decimal number : ");
    scanf("%d",&num);

    printf("%d = %lld",num,convert(num));
    return 0;
}

long long convert(int n){
    int rem,i;
    long long binary = 0;
    for(i = 1;n!=0;i*=10){
        rem = n%2; // Its binary , so % 2,not 10
        binary += rem * i;
        n /=2;
    }
    return binary;
}