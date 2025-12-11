#include <stdio.h>
#include <string.h>

int main() {
    int C, B, E;
    char seq[12222 * 5]; 

    scanf("%d", &C);  

    while (C--) {
        scanf("%d %d", &B, &E);

        int len = 0;
        
        for (int i = B; i <= E; i++) {
            len += sprintf(seq + len, "%d", i);
        }

        printf("%s", seq);


        for (int i = len - 1; i >= 0; i--) {
            putchar(seq[i]);
        }

        printf("\n"); 
    }

    return 0;
}
