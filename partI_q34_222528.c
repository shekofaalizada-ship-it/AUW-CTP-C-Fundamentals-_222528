#include <cs50.h>
#include <stdio.h>

int find_max(int a, int b);

int main(void)
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");

    int max = find_max(x, y);
    printf("Maximum = %i\n", max);
}

int find_max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
