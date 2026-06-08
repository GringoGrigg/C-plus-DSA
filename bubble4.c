#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int d = 0; d < n - i - 1; d++) {
            if (arr[d] > arr[d + 1]) {
                // Swap arr[d] and arr[d + 1]
                int temp = arr[d];
                arr[d] = arr[d + 1];
                arr[d + 1] = temp;
            }
        }
    }
}
