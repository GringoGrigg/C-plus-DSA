#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void print_array(int arr[], int n);
int main(void)
{    int n = get_int("Enter the number of elements: ");
    int arr[n];
    for (int i = 0; i < n; i++)   {
        arr[i] = get_int("Enter element %d: ", i + 1);
    }
    printf("Original array: ");
    print_array(arr, n);
    bubble_sort(arr, n);
    printf("Array after bubble sort: ");
    print_array(arr, n);
    return 0;
}
