#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get the number of values to average from the user
    int n = get_int("How many numbers do you want to average? \n");

    // Check if n is greater than 0 to avoid division by zero
    if (n == 0)
    {
        printf("Enter a valid number of values.\n");
        return 1; // Exit with an error code
    }

    float sum = 0.0; // Initialize sum as a float to handle decimal averages

    // Loop to get each number from the user and add it to the sum
    for (int i = 0; i < n; i++)
    {
        float num = get_float("Enter number %d: \n", i + 1);
        sum += num; // Add the number to the sum
    }

    // Calculate the average
    float average = sum / n;

    // Print the average
    printf("The average is: %.2f\n", average);

    return 0; // Exit with success code
}
