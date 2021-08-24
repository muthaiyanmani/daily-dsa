#include<stdio.h>
#include<stdbool.h>

int main(){
    char letter;
    bool lowercase,uppercase;
    printf("Enter a character to check whether it is vowel or not: ");
    scanf("%c",&letter);

    lowercase = (letter == 'a' || letter =='e'|| letter == 'i' || letter =='o'|| letter == "u");
    uppercase = (letter == 'A' || letter =='E'|| letter == 'I' || letter =='O'|| letter == "U");
    if(lowercase || uppercase){
        printf("Given character \"%c\" is vowel",letter);
    }else{
        printf("Given character is Consonant");
    }

  
    return 0;
}