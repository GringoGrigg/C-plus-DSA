#include <stdio.h>
#include <cs50.h>
int main(void)
{
    //prompting user for input
    string name = get_string("What is your name? \n");
    //printing the output
    printf("Hello, %s \n", name);
}
