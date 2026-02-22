#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter a number: ");

    if (number >= 1 && number <= 100)
    {
        printf("Number is in range 1-100\n");
    }
    else
    {
        printf("Number is out of range\n");
    }
}
