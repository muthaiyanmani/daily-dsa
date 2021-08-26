#include <stdio.h>

void printAlphabet()
{
    char letter;
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        printf("%c", letter);
    }
}

int main()
{
    printAlphabet();
    return 0;
}