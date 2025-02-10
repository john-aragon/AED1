#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100005

void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char S[MAX];

    scanf("%s", S);

    to_lowercase(S);

    if (strstr(S, "zelda") != NULL) {
        printf("Link Bolado\n");
    } else {
        printf("Link Tranquilo\n");
    }

    return 0;
}
