#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string name [] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    string number [] = {"123-456-7890", "234-567-8901", "345-678-9012", "456-789-0123", "567-890-1234"};
    string n = get_string("Enter a name to search for: \n");
    for (int i =0; i<5; i++)
    {
        if (strcmp(name[i], n) == 0)
        {
            printf("Number found: %s \n", number[i]);
            return 0; // Exit with success code
        }
    }

   printf("Name not found \n");
   return 1; // Exit with an error code
}
