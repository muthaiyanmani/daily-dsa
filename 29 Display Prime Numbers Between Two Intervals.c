#include<stdio.h>

int main(){
    int i,num1,num2,result;
    printf("Enter the two intervals : ");
    scanf("%d %d",&num1,&num2);
    printf("The PRIME NUMBERS are : ");
    for(num1;num1<num2;num1++){
        int flag = 1;
        for(i=2;i<num1;i++){
            if(num1%i == 0){
                flag = 0;    
            }
        }
       
        if(flag == 1){  
           printf("%d ",num1);
        }
    }
    return 0;
}