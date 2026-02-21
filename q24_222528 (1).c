#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter height: ");

    for (int i = n; i >0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
