#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    if (a > b)
    {
        printf("%i is larger\n", a);
    }
    else if (b > a)
    {
        printf("%i is larger\n", b);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}
