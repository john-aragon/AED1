#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

int main() {
    int N;
    char linha[MAX + 1];

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        fgets(linha, sizeof(linha), stdin);

        linha[strcspn(linha, "\n")] = '\0';

        int len = strlen(linha);

        for (int j = 0; j < len; j++) {
            if (isalpha(linha[j])) {
                linha[j] += 3;
            }
        }

        for (int j = 0; j < len / 2; j++) {
            char temp = linha[j];
            linha[j] = linha[len - 1 - j];
            linha[len - 1 - j] = temp;
        }

        for (int j = len / 2; j < len; j++) {
            linha[j] -= 1;
        }

        printf("%s\n", linha);
    }

    return 0;
}
