#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        int K;
        scanf("%d", &K);
        
        char idioma[101][21];
        int idioma_unico = 1;
        
        scanf("%s", idioma[0]);
        
        for (int i = 1; i < K; i++) {
            scanf("%s", idioma[i]);
            if (strcmp(idioma[i], idioma[0]) != 0) {
                idioma_unico = 0;
            }
        }
        
        if (idioma_unico) {
            printf("%s\n", idioma[0]);
        } else {
            printf("ingles\n");
        }
    }
    
    return 0;
}
