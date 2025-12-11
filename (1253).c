#include <stdio.h>
#include <string.h>

int main() {
    int N, shift, i, j;
    char text[51];

    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
        scanf("%s", text);
        scanf("%d", &shift);

        int length = strlen(text);

        for (j = 0; j < length; j++) {
            text[j] = (text[j] - 'A' - shift + 26) % 26 + 'A';
        }

        printf("%s\n", text);
    }

    return 0;
}
