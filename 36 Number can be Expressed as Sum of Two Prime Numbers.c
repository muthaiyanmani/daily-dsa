#include<stdio.h>
int checkPrime(int num);

int main(){
    int num,i,flag = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2;i<num;i++){ // i <= num/2
        if(checkPrime(i) == 1){
            if(checkPrime(num-i) == 1){
                printf("%d = %d + %d\n",num,i,num-i);
                flag = 1;
            }
        }
    }
    if(flag == 0){
        printf("Can't be expressed. ");
    }
}

int checkPrime(int n){
    int i,flag = 1;
    for(i= 2;i<n;i++){
        if(n%i == 0){
            flag = 0;
        }
    }
    return flag;
}