#include<stdio.h>

int getInput(){
    int num1,num2;
    printf("Enter two numbers to calculate LCM : ");
    scanf("%d %d",&num1,&num2);
    return calcLCM(num1,num2);
}

int calcLCM(int n1,int n2){
    int gcd,lcm;
    for(int i = 1;i<=n1 && i<=n2;i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    return lcm = (n1 * n2)/gcd; 
}

int main(){
    int lcm;
    lcm = getInput();
    printf("The LCM is %d",lcm);
    return 0;
}