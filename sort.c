#include <stdio.h>
#include <cs50.h>
void sort(int values[], int n);
int main(void)
{
    int n = get_int("Number of values: ");
    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("Value: ");
    }
    sort(values, n);
    printf("Sorted values:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }                                                                                                                               
