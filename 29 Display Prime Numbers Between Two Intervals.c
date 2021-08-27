#include<stdio.h>

int main(){
    int i,num1,num2,result,flag;
    printf("Enter the two intervals : ");
    scanf("%d %d",&num1,&num2);
    
    if( 1<num1 && num1<num2){
        printf("The PRIME NUMBER in betweeen are : ");
        for(num1;num1<num2;num1++){
            for(i=2;i<num1;i++){
                if(num1%i == 0){
                    flag =1;
                }
            }
            if(flag == 1){  
               
            }else{
                printf("%d \t",num1);
            }

        }
    }else{
        printf("Enter a valid number or greater than ONE.");
    }
    return 0;
}