#include <stdio.h>
#include <stdlib.h>

#define MAX_N 10000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int binary_search_first(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            result = mid; 
            right = mid - 1; 
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, q, case_num = 1;
    
    while (scanf("%d %d", &n, &q), n || q) {
        int marbles[MAX_N];

        for (int i = 0; i < n; i++) {
            scanf("%d", &marbles[i]);
        }

        // Ordena os mármores
        qsort(marbles, n, sizeof(int), compare);

        printf("CASE# %d:\n", case_num++);
        for (int i = 0; i < q; i++) {
            int query;
            scanf("%d", &query);

            int pos = binary_search_first(marbles, n, query);
            if (pos != -1) {
                printf("%d found at %d\n", query, pos + 1);
            } else {
                printf("%d not found\n", query);
            }
        }
    }

    return 0;
}
