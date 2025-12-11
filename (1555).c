#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        char text[201];
        int freq[ALPHABET_SIZE] = {0}; 
        
        getchar(); 
        
        fgets(text, sizeof(text), stdin);
        
        for (int i = 0; text[i] != '\0'; i++) {
            char ch = tolower(text[i]); 
            
            if (ch >= 'a' && ch <= 'z') {
                freq[ch - 'a']++;
            }
        }

        int max_freq = 0;
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
            }
        }
        
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            if (freq[i] == max_freq) {
                printf("%c", 'a' + i);
            }
        }
        printf("\n");
    }
    
    return 0;
}
