#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char A[1001], B[1001];

    scanf("%d", &N);
    while (N--) {
        scanf("%s %s", A, B);

        int lenA = strlen(A);
        int lenB = strlen(B);

        if (lenB <= lenA && strcmp(A + (lenA - lenB), B) == 0) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }

    return 0;
}

