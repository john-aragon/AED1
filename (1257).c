#include <stdio.h>
#include <string.h>

int compute_hash(int test_case, char str[]) {
    int hash_value = 0;
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        int char_value = (str[i] - 'A') + test_case + i;
        hash_value += char_value;
    }
    
    return hash_value;
}

int main() {
    int N; 
    scanf("%d", &N);
    
    while (N--) {
        int L;
        scanf("%d", &L);
        getchar();
        
        int total_hash = 0;
        
        for (int i = 0; i < L; i++) {
            char str[51];
            scanf("%s", str);
            total_hash += compute_hash(i, str);
        }
        
        printf("%d\n", total_hash);
    }
    
    return 0;
}

