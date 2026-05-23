#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // Get an integer from the user
    int n = get_int("Enter the type of operation you want to perform? \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n");
if(n==1)    {
    printf("You selected Addition\n");
}
else if(n==2)    {
    printf("You selected Subtraction\n");
}
else if(n==3)    {
    printf("You selected Multiplication\n");
}
else if(n==4)    {
    printf("You selected Division\n");
}
else    {
    printf("Invalid selection\n");
}

    
}
