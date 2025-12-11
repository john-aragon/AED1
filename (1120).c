#include <stdio.h>
#include <string.h>

int main() {
    char D, N[102];

    while (1) {
        scanf(" %c %s", &D, N);

        if (D == '0' && N[0] == '0' && N[1] == '\0') {
            break;
        }

        int k = 0;
        for (int i = 0; N[i] != '\0'; i++) {
            if (N[i] != D) {
                N[k++] = N[i];
            }
        }
        N[k] = '\0';

        int start = 0;
        while (N[start] == '0' && N[start + 1] != '\0') {
            start++;
        }

        if (strlen(N + start) == 0) {
            printf("0\n");
        } else {
            printf("%s\n", N + start);
        }
    }

    return 0;
}
