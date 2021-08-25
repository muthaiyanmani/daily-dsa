#include<stdio.h>

int main(){

    char character;
    printf("Enter a Alphabet Character : ");
    scanf("%c",&character);
    if(('a' <= character && character <='z') || ('A'<= character && character <='Z')){
        printf("%c is a Alphabet.",character);
    }else{
        printf("It is not a Alphabet");
    }
    return 0;
}