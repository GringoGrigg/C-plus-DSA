#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    string name = get_string("What is your name? ");
    int n = strlen(name);

    printf("Your name has %i characters\n", n);
}
