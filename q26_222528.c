#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter a number: ");

    if (number > 0)
    {
        printf("Positive\n");
    }
    else if (number < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}
