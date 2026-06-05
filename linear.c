#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
void linear_search(int arr[], int n, int target);
int main(void)
{    int n = get_int("Enter the number of elements: ");
    int arr[n];
    for (int i = 0; i < n; i++)   {
        arr[i] = get_int("Enter element %d: ", i + 1);
    }
    int target = get_int("Enter the target element to search for: ");
    linear_search(arr, n, target);
    return 0;
}
void linear_search(int arr[], int n, int target){    for (int i = 0; i < n; i++)   {
        if (arr[i] == target)       {
            printf("Element found at index: %d\n        ", i);
            return;       }   }     printf("Element not found in the array.\n");}
