#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("Enter age: ");
    int citizenship = get_int("Are you a citizen? (1 = Yes, 0 = No): ");

    if (age >= 18)
    {
        if (citizenship == 1)
        {
            printf("Eligible to Vote\n");
        }
        else
        {
            printf("Not Eligible to vote\n");
        }
    }
    else
    {
        printf("Not Eligible (Under Age)\n");
    }
}
