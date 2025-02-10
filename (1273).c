#include <stdio.h>
#include <string.h>

int main() {
    int N, first_case = 1;
    
    while (scanf("%d", &N) && N != 0) {
        getchar();
        
        char words[N][51];
        int max_length = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%s", words[i]);
            int len = strlen(words[i]);
            if (len > max_length) {
                max_length = len;
            }
        }
        
        if (!first_case) {
            printf("\n");
        }
        first_case = 0;
        
        for (int i = 0; i < N; i++) {
            printf("%*s\n", max_length, words[i]);
        }
    }
    
    return 0;
}
