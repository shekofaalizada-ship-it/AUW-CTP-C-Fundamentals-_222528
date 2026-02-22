#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[5];    
    int sum = 0;


    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number %i: ", i + 1);
    }


    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    printf("Sum = %i\n", sum);
}
