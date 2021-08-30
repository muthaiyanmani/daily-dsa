#include<stdio.h>
#include<math.h>

int convert(int num);
int main(){
    long long num;
    printf("Enter a binary number : ");
    scanf("%lld",&num);
    printf("%lld Binary value  = %d Decimal value\n",num,convert(num));
}

int convert(int n){
    int i,rem,decimal = 0;
    for(i = 0 ;n!=0;i++){
        rem = n % 10;
        decimal += rem*pow(2,i); 
        n /=10;
    }
    return decimal;
}