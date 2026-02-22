#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[5];
    int sum = 0;
    float average;

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number %i: ", i + 1);
    }


    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];

    }


    average = sum / 5.0;
     printf("sum = %.2d\n", sum);
    printf("Average = %.2f\n", average);
}
