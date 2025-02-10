#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool atendeAplicacoes(char *serverApps, char *userApps) {
    for (int i = 0; userApps[i] != '\0'; i++) {
        if (strchr(serverApps, userApps[i]) == NULL) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, M; 
    char serverApps[201][21]; 
    char userApps[101][21];   

    while (1) {
 
        scanf("%d %d", &N, &M);

  
        if (N == 0 && M == 0) {
            break;
        }

  
        for (int i = 0; i < N; i++) {
            scanf("%s", serverApps[i]);
        }

    
        for (int i = 0; i < M; i++) {
            scanf("%s", userApps[i]);
        }

        int totalConexoes = 0; 

     
        for (int i = 0; i < M; i++) {         
            for (int j = 0; j < N; j++) {    
                if (atendeAplicacoes(serverApps[j], userApps[i])) {
                    totalConexoes++;
                }
            }
        }

       
        printf("%d\n", totalConexoes);
    }

    return 0;
}
