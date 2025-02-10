#include <stdio.h>
#include <string.h>

int min_operations(char *A, char *B) {
    int total = 0;
    for (int i = 0; A[i] != '\0'; i++) {
        int diff = B[i] - A[i];
        if (diff < 0) diff += 26; 
        total += diff;
    }
    return total;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char A[10005], B[10005];
        scanf("%s %s", A, B);
        printf("%d\n", min_operations(A, B));
    }
    
    return 0;
}
