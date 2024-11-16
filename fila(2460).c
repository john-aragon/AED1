#include <stdio.h>

#define max 500000

int main(){
    int N, M;
    int identificador[max], exitfila[max];
    int quemsai[max]={0};

    scanf("%d", &N);
    for (int i = 0; i <N; i++){
        scanf("%d", identificador[i]);
    }
    scanf("%d", &M);
    for (int i = 0; i < M; i++){
        scanf("%d", &exitfila[i]);
        quemsai[exitfila[i]]=1;
    } 

    for (int i = 0; i < N; i++){
        if (quemsai[exitfila[i]]==0){
            printf("%d", identificador[i]);
        }    
    }
    

    return 0;
}