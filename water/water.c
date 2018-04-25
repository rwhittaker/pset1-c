#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes Showered: ");
    int minutes = get_int();
    int bottles = minutes * 192 / 16;
    printf("Bottles: %i \n" , bottles);
}