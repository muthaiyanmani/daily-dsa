#include<stdio.h>

int main(){
    int i,num;
    printf("Enter a number to display its factors : ");
    scanf("%d",&num);
    printf("The factors of %d are : ",num);

    for(i=1;i<=num;i++){
        if(num%i == 0){
            printf("%d ",i);
    }
    }
    return 0;
}