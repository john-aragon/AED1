#include <stdio.h>
#include <ctype.h>

int main() {
    char linha[51];

    while (fgets(linha, sizeof(linha), stdin)) {
        int maiuscula = 1; 

        for (int i = 0; linha[i] != '\0'; i++) {
            if (linha[i] >= 'a' && linha[i] <= 'z' || linha[i] >= 'A' && linha[i] <= 'Z') {
                if (maiuscula) {
                    linha[i] = toupper(linha[i]);
                } else {
                    linha[i] = tolower(linha[i]);
                }
                maiuscula = !maiuscula; 
            }
        }
        printf("%s", linha);
    }

    return 0;
}
