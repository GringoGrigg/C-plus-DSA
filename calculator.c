#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <cs50.h>
int main(void)
{
    int num = get_int("What Mathematical operation do you want to perform? (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ");
    if (num < 1 || num > 4) {
        printf("Invalid operation selected. Please select a number between 1 and 4.\n");
        return 1;
    }
    else if (num == 1) {
        int a = get_int("Enter the first number: ");
        int b = get_int("Enter the second number: ");
        printf("The result of %d + %d is %d\n", a, b, a + b);
    }
    else if (num == 2) {
        int a = get_int("Enter the first number: ");
        int b = get_int("Enter the second number: ");
        printf("The result of %d - %d is %d\n", a, b, a - b);
    }
    else if (num == 3) {
        int a = get_int("Enter the first number: ");
        int b = get_int("Enter the second number: ");
        printf("The result of %d * %d is %d\n", a, b, a * b);
    }
    else if (num == 4) {
        int a = get_int("Enter the first number: ");
        int b = get_int("Enter the second number: ");
        if (b == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        printf("The result of %d / %d is %.2f\n", a, b, (float)a / b);
    }           

    }   
    printf("You selected operation %d\n", num);
}   