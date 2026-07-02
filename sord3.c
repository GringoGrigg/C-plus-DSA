#include <stdio.h>
#include <stdlib.h>
void selection_sort(int arr[], int m) {
    for (int i = 0; i < m - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < m; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap arr[i] and arr[min_index]
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
