#include<stdio.h>

int main(){
    int mul,limit,i;
    printf("Enter multiplicant : ");
    scanf("%d",&mul);
    printf("Enter table limit, greater than 1 : ");
    scanf("%d",&limit);

    for(i = 1;i<=limit;i++){
        printf("%d * %d = %d\n",i,mul,i*mul);
    }
    return 0;
}