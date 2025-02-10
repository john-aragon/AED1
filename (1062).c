#include <stdio.h>

#define MAX_N 1000

int main() {
    int N;
    
    while (scanf("%d", &N), N) {
        while (1) {
            int perm[MAX_N];
            int stack[MAX_N], top = -1, expected = 1;
            int valid = 1;

            scanf("%d", &perm[0]);
            if (perm[0] == 0) { 
                printf("\n"); 
                break; 
            }

            for (int i = 1; i < N; i++) {
                scanf("%d", &perm[i]);
            }

            for (int i = 0; i < N; i++) {
                while (expected <= perm[i]) {
                    stack[++top] = expected++;
                }
                if (stack[top] == perm[i]) {
                    top--; // Remove da pilha
                } else {
                    valid = 0;
                    break;
                }
            }

            printf(valid ? "Yes\n" : "No\n");
        }
    }
    
    return 0;
}
