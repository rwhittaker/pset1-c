#include <cs50.h>
#include <stdio.h>

int main(void)
{
int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);

int row = 0;

//OUTER LOOP: ITERATE OVER ROWS
for(int i = 0; i < height; i++)
{
    row++;
    //LEFT SPACES: FOR EACH ROW, ADD HEIGHT - ROW SPACES
    for (int j = height - row; j > 0; j--)
    {
        printf(" ");
    }
    //LEFT SIDE: FOR EACH ROW, ADD ROW NUMBER OF HASHES
    for(int k = 0; k < row; k++)
    {
        printf("#");
    }

    //GAP NO LOOP
    printf("  ");

    //RIGHT SIDE: FOR EACH ROW, ADD ROW NUMBER OF HASHES
    for(int l = 0; l < row; l++)
    {
        printf("#");
    }
    // AT THE END OF EACH ROW, GOTO NEW LINE
    printf("\n");
}

//MIRROR LINE

printf("Alanna Hazel Brown");
printf("\n");
row++;

//MIRROR IMAGE LOOP
for(int i = 0; i < height; i++)
{
    row--;
    //LEFT SPACES: FOR EACH ROW, ADD HEIGHT - ROW SPACES
    for (int j = height - row; j > 0; j--)
    {
        printf(" ");
    }
    //LEFT SIDE: FOR EACH ROW, ADD ROW NUMBER OF HASHES
    for(int k = 0; k < row; k++)
    {
        printf("#");
    }

    //GAP NO LOOP
    printf("  ");

    //RIGHT SIDE: FOR EACH ROW, ADD ROW NUMBER OF HASHES
    for(int l = 0; l < row; l++)
    {
        printf("#");
    }
    // AT THE END OF EACH ROW, GOTO NEW LINE
    printf("\n");
}
    return 0;
}


