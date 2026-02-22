#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float temperature = get_float("Enter temperature: ");

    if (temperature < 20)
    {
        printf("Cold\n");
    }
    else if (temperature <= 30)
    {
        printf("Warm\n");
    }
    else
    {
        printf("Hot\n");
    }
}
