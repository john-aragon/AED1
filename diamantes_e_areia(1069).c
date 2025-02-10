#include <stdio.h>
#include <string.h>

int contar_diamantes(const char *linha) {
    int diamantes = 0;
    int abertura = 0;

    for (int i = 0; linha[i] != '\0'; i++) {
        if (linha[i] == '<') {
            abertura++;
        } else if (linha[i] == '>' && abertura > 0) {
            abertura--;
            diamantes++;
        }
    }

    return diamantes;
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); 

    while (n--) {
        char linha[1001];
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0'; 

        int resultado = contar_diamantes(linha);
        printf("%d\n", resultado);
    }

    return 0;
}
