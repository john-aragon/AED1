#include <stdio.h>

int bubbleSort(int arr[], int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int l;
        scanf("%d", &l);

        int arr[l];
        for (int i = 0; i < l; i++) {
            scanf("%d", &arr[i]);
        }

        int swaps = bubbleSort(arr, l);

        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}
