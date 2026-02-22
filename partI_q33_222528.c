#include <cs50.h>
#include <stdio.h>

void check_even_odd(int n);

int main(void)
{
    int number = get_int("Enter a number: ");
    check_even_odd(number);
}

void check_even_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
