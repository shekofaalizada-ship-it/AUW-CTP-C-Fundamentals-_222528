#include <stdio.h>

int main(void)
{

    float numbers[5] = {2.5, 3.1, 4.8, 1.2, 9.6};

    printf("Float Values: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", numbers[i]);
    }
    printf("\n");
}
