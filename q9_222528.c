#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float number = get_float("Enter a float: ");
    printf("Float value: %.2f\n", number);
}
