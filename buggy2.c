
#include <stdio.h>
#include <cs50.h>
void print_hash(int n);

int main(void)
{
    int n=get_int("Enter the number of times to stack the Hash table \n");
    print_hash(n);
}

void print_hash(int n)
{
    for (int i=0; i<n; i++)
    {
        printf("# \n");
    }
}
