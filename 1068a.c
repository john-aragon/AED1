#include <stdio.h>
#include <string.h>

#define MAX 1000

int verifica(const char *expressao){
    int balance = 0;

    for (int  i = 0; expressao[i] != '\0'; i++)
    {
        if (expressao[i] == '(') {
            balance++; 
        } else if (expressao[i] == ')') {
            balance--; 
            if (balance < 0) {
                return 0; 
            }
        }
    }
    return balance == 0; 
}

int main() {
    char expressao[MAX];
    while (scanf("%s", expressao) !=EOF)
    {
        if(verifica(expressao))
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    
    return 0;
}