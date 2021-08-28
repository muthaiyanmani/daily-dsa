#include<stdio.h>
#include<math.h>

int main(){
    int num1,num2,temp,remainder,power=0;
    printf("Enter two number intervals : ");
    scanf("%d %d",&num1,&num2);

    printf("The armstrong numbers are : ");
    //Just using 3 digits armstrong
    if(num1>1 && num1<num2){
        for(num1;num1<num2;num1++){
            temp = num1;
            for(int i = 0;num1>0;i++){
                remainder = num1 % 10;
                power += pow(remainder,3);
                num1/=10;
            }
            if(power == temp){
                printf("%d",power);
            }
        }
    }
    return 0;
}