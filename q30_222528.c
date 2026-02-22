#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");
    int c = get_int("Enter third number: ");

    if (a == b && b == c)
    {
        printf("All numbers are equal\n");
    }
    else if (a >= b && a >= c)
    {
        printf("%i is the largest\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%i is the largest\n", b);
    }
    else
    {
        printf("%i is the largest\n", c);
    }
}
