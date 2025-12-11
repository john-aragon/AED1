#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        char senha[17];
        scanf("%s", senha);
        
        int variacoes = 1;
        for (int i = 0; i < strlen(senha); i++) {
            if (senha[i] == 'A' || senha[i] == 'a' || senha[i] == 'E' || senha[i] == 'e' ||
                senha[i] == 'I' || senha[i] == 'i' || senha[i] == 'O' || senha[i] == 'o' ||
                senha[i] == 'S' || senha[i] == 's') {
                variacoes *= 3;
            } else {
                variacoes *= 2;
            }
        }
        
        printf("%d\n", variacoes);
    }
    
    return 0;
}