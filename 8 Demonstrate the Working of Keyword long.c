#include<stdio.h>

int main(){
    int a;
    long b;
    long long c;
    double d;
    long double e;

    printf("The value of Integer is %d\n",sizeof(a));
    printf("The value of Long Integer is %d\n",sizeof(b));
    printf("The value of Long Long Integer is %d\n",sizeof(c));
    printf("The value of Double is %d\n",sizeof(d));
    printf("The value of Long Double is %d\n",sizeof(e));
    return 0;
}