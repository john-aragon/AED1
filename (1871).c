#include <stdio.h>
#include <stdlib.h>

int remove_zeros(int num) {
    char str[20], resultado[20];
    sprintf(str, "%d", num);
    int j = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0') {
            resultado[j++] = str[i];
        }
    }
    resultado[j] = '\0';
    
    return atoi(resultado);
}

int main() {
    int M, N;
    while (1) {
        scanf("%d %d", &M, &N);
        if (M == 0 && N == 0) break;
        
        int soma = M + N;
        printf("%d\n", remove_zeros(soma));
    }
    
    return 0;
}
