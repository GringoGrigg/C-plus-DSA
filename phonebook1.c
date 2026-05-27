#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}person;

int main(void)
{
    person people[5];
    people[0].name = "Alice";
    people[0].number = "123-456-7890";
    people[1].name = "Bob";
    people[1].number = "234-567-8901";
    people[2].name = "Charlie";
    people[2].number = "345-678-9012";
    people[3].name = "David";
    people[3].number = "456-789-0123";
    people[4].name = "Eve";
    people[4].number = "567-890-1234";

    string n = get_string("Enter a name to search for: \n");
    for (int i =0; i<5; i++)
    {
        if (strcmp(people[i].name, n) == 0)
        {
            printf("Number found: %s \n", people[i].number);
            return 0; // Exit with success code
        }
    }

   printf("Name not found \n");
   return 1; // Exit with an error code
}
