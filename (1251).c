#include <stdio.h>
#include <string.h>

#define MAX 1000
#define ASCII_RANGE 256

typedef struct {
    int ascii;
    int freq;
} CharFreq;

int compare(const void *a, const void *b) {
    CharFreq *cf1 = (CharFreq *)a;
    CharFreq *cf2 = (CharFreq *)b;

    if (cf1->freq != cf2->freq) {
        return cf1->freq - cf2->freq;
    }
    return cf2->ascii - cf1->ascii;
}

int main() {
    char linha[MAX + 1];
    int frequencias[ASCII_RANGE];
    int primeira_saida = 1;

    while (fgets(linha, sizeof(linha), stdin)) {
        memset(frequencias, 0, sizeof(frequencias));

        for (int i = 0; linha[i] != '\0'; i++) {
            frequencias[(unsigned char)linha[i]]++;
        }

        CharFreq chars[ASCII_RANGE];
        int count = 0;
        for (int i = 0; i < ASCII_RANGE; i++) {
            if (frequencias[i] > 0) {
                chars[count].ascii = i;
                chars[count].freq = frequencias[i];
                count++;
            }
        }

        qsort(chars, count, sizeof(CharFreq), compare);

        if (!primeira_saida) {
            printf("\n");
        }
        primeira_saida = 0;

        for (int i = 0; i < count; i++) {
            printf("%d %d\n", chars[i].ascii, chars[i].freq);
        }
    }

    return 0;
}
