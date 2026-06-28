#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    char *names[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    char *numbers[] = {"123-456-7890", "234-567-8901", "345-678-9012", "456-789-0123", "567-890-1234"};

    char name[100];
    printf("Enter a name to search for: \n");
    scanf("%99s", name); // Read a string from user input

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Number found: %s \n", numbers[i]);
            return 0; // Exit with success code
        }
    }

    printf("Name not found \n");
    return 1; // Exit with an error code
}
