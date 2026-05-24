#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int number [] = {20,500,10,5,100,1,50};
    int n = get_int("Enter a number to search for: \n");
    for (int i =0; i<7; i++)
    {
        if (number[i] ==n)
        {
            printf("Number found \n");
            return 0; // Exit with success code
        }
    }

   printf("Number not found \n");
   return 1; // Exit with an error code
}
