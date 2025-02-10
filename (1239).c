#include <stdio.h>

int main() {
    char c;
    int italico = 0, negrito = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '_') {
            italico = !italico;
            printf(italico ? "<i>" : "</i>");
        } else if (c == '*') {
            negrito = !negrito;
            printf(negrito ? "<b>" : "</b>");
        } else {
            putchar(c);
        }
    }
    
    return 0;
}
