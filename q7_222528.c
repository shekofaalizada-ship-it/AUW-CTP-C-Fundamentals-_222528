#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter an integer: ");
    float decimal = get_float("Enter a float: ");
    char letter = get_char("Enter a character: ");

    printf("Integer: %i\n", number);
    printf("Float: %f\n", decimal);
    printf("Character: %c\n", letter);
}
