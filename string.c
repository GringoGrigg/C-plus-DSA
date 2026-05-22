#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    string s = get_string("What is your name? ");
    int n = strlen(s);
    printf("Output: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", s[i]);
    }
    printf("\n");
}
