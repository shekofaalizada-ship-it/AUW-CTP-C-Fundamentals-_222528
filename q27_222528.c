#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter a number: ");

    if (number == 0)
    {
        printf("Zero\n");
    }
    else if (number % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
