#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        char str1[51], str2[51];
        scanf("%s %s", str1, str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int i = 0, j = 0;

        while (i < len1 || j < len2) {
            if (i < len1) {
                printf("%c", str1[i]);
                i++;
            }
            if (j < len2) {
                printf("%c", str2[j]);
                j++;
            }
        }
        printf("\n");
    }

    return 0;
}
