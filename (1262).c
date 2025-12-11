#include <stdio.h>
#include <string.h>

int main() {
    char historico[51];
    int P;

    while (scanf("%s", historico) != EOF) {
        scanf("%d", &P);
        
        int ciclos = 0;
        int i = 0;
        int len = strlen(historico);

        while (i < len) {
            if (historico[i] == 'W') {
                ciclos++;
                i++;
            } else {
                int countR = 0;
                while (i < len && historico[i] == 'R') {
                    countR++;
                    i++;
                }

                ciclos += (countR + P - 1) / P;
            }
        }

        printf("%d\n", ciclos);
    }
    return 0;
}
