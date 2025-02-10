#include <stdio.h>
#include <string.h>

int verificar_numero(const char *palavra) {
    if (strlen(palavra) == 3) {
        int um = (palavra[0] == 'o') + (palavra[1] == 'n') + (palavra[2] == 'e');
        int dois = (palavra[0] == 't') + (palavra[1] == 'w') + (palavra[2] == 'o');
        
        if (um >= 2) return 1;
        if (dois >= 2) return 2;
    } else if (strlen(palavra) == 5) {
        return 3; 
    }
    return -1;
}

int main() {
    int n;
    char palavra[6];
    
    scanf("%d", &n);
    
    while (n--) {
        scanf("%s", palavra);
        printf("%d\n", verificar_numero(palavra));
    }
    
    return 0;
}
