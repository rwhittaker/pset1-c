#include <cs50.h>
#include <stdio.h>

int main(void)
{
int lanna_number;
    do
    {
        printf("Enter number of Lannas: ");
        lanna_number = get_int();
    }
    while (lanna_number < 0 || lanna_number > 100);

    int row = 0;

    for (int i = 0; i < lanna_number; i++)
    {
        row++;
        for (int j = lanna_number - row; j > 0; j--)
        {
            printf(" ");
        }
        printf("Alanna Hazel Brown\n");
    }

    for (int i = 0; i < lanna_number; i++)
    {
        row--;
        for (int j = lanna_number - row; j > 0; j--)
        {
            printf(" ");
        }
        for(int k = 0; k < row; k++)
        {
            printf("Alanna Hazel Brown\n");
        }
    }

}
