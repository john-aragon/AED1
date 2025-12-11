#include <stdio.h>
#include <string.h>

#define MAX 1001

int main() {
    char str[MAX];

    while (scanf("%s", str) != EOF) {
        int freq[26] = {0}; 
        int impares = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            freq[str[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                impares++;
            }
        }

        int resultado = (impares > 1) ? (impares - 1) : 0;

        printf("%d\n", resultado);
    }

    return 0;
}
