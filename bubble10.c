#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
int main (void)
{
    int n = get_int("Size of array: ");
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = get_int("Element %i: ", i);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)    {
        printf("%i ", array[i]);
    }
    printf("\n");
}       
