#include<stdio.h>

int main(){
    int num,pow,result = 1;
    printf("Enter a Base Number : ");
    scanf("%d",&num);
    printf("Enter a Power Number : ");
    scanf("%d",&pow);
    for(;0<pow;pow--){
        result*=num;
    }
    printf("The power of a Number is %d",result);
}