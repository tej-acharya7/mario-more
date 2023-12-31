#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get Height between 1 and 8, inclusive
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while ((height < 1) || (height > 8));

    // Print the Pyramids
    for (int row = 1; row <= height; row++)
    {
        for (int i = 1; i <= (height - row); i++)
        {
            printf(" ");
        }

        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }

        printf("  ");

        for (int k = 1; k <= row; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
