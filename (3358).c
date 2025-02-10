#include <stdio.h>
#include <ctype.h>
#include <string.h>

int eh_consoante(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int main() {
    int N;
    scanf("%d", &N);
    getchar();
    
    while (N--) {
        char sobrenome[43];
        fgets(sobrenome, sizeof(sobrenome), stdin);
        sobrenome[strcspn(sobrenome, "\n")] = '\0';
        
        int consecutivas = 0, dificil = 0;
        for (int i = 0; sobrenome[i] != '\0'; i++) {
            if (eh_consoante(sobrenome[i])) {
                consecutivas++;
                if (consecutivas >= 3) {
                    dificil = 1;
                    break;
                }
            } else {
                consecutivas = 0;
            }
        }
        
        printf("%s %s\n", sobrenome, dificil ? "nao eh facil" : "eh facil");
    }
    
    return 0;
}
