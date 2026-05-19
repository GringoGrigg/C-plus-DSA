#include <cs50.h>
#include <stdio.h>

// Function prototype (declaration)
void meow(int n);

int main(void)
{
    // Call meow with argument number P to meow P number of times
    int n = get_int("Number of times to meow: \n");
    meow(n);
}
// Function definition (actual implementation)
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}





