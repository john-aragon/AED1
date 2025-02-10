#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char numero[101];
    int leds_por_digito[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &n);

    while (n--) {
        int total_leds = 0;
        scanf("%s", numero);

        for (int i = 0; i < strlen(numero); i++) {
            total_leds += leds_por_digito[numero[i] - '0'];
        }

        printf("%d leds\n", total_leds);
    }

    return 0;
}