#include <stdio.h>
#include <string.h>

int venceu(char *r, char *s) {

    if ((strcmp(r, "tesoura") == 0 && (strcmp(s, "papel") == 0 || strcmp(s, "lagarto") == 0)) ||
        (strcmp(r, "papel") == 0 && (strcmp(s, "pedra") == 0 || strcmp(s, "spock") == 0)) ||
        (strcmp(r, "pedra") == 0 && (strcmp(s, "lagarto") == 0 || strcmp(s, "tesoura") == 0)) ||
        (strcmp(r, "lagarto") == 0 && (strcmp(s, "spock") == 0 || strcmp(s, "papel") == 0)) ||
        (strcmp(r, "spock") == 0 && (strcmp(s, "tesoura") == 0 || strcmp(s, "pedra") == 0))) {
        return 1;
    }
    return 0;
}

int main() {
    int C;
    char rajesh[10], sheldon[10];

    scanf("%d", &C);
    
    while (C--) {
        scanf("%s %s", rajesh, sheldon);
        
        if (strcmp(rajesh, sheldon) == 0) {
            printf("empate\n");
        } else if (venceu(rajesh, sheldon)) {
            printf("rajesh\n");
        } else {
            printf("sheldon\n");
        }
    }
    
    return 0;
}
