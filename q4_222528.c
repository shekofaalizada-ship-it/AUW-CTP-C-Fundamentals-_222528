#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double number = get_double("Enter a double: ");
    printf("Double value: %lf\n", number);
}
