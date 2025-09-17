#include <stdio.h>

int main() {
    int n, menor, posicao;
    int vetor[1000];
    scanf("%d", &n);
        for (int i = 0; i < n; i++)
        { 
            scanf("%d", &vetor[i]);
        }
        menor=vetor[0];
        for (int i = 0; i < n; i++)
        {
            if (vetor[i]<menor){
                menor=vetor[i];
                posicao=i;
            }  
        }
        printf("Menor valor: %d\n", menor);
        printf("Posicao: %d\n", posicao);
    return 0;
}