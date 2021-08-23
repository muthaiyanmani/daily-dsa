#include<stdio.h>

int main(){
    int a;
    float d;
    double e;
    char f;

    printf("The size of Integer is %lu bytes\n",sizeof(a));
    printf("The size of Float is %lu bytes\n",sizeof(d));
    printf("The size of Double is %lu bytes\n",sizeof(e));
    printf("The size of Char is %lu bytes\n",sizeof(f));
    return 0;
}