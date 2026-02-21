#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char letter = get_char("Enter a character: ");
    printf("You entered: %c\n", letter);
}
