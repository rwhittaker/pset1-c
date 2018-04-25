#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    float dollars;
    float cents;
    int n;
    int coins = 0;

        do
        {
            printf("O hai! How much change is owed?\n");
            dollars = get_float();
            cents = (int) round(dollars * 100);
            n = cents;
            printf("%i\n",n);

        }
        while (dollars < 0); // if it's less than zero, it keeps asking

        while (n>= 25){
            n = n - 25;
            coins++;
        }
         while (n>=10){
            n = n - 10;
            coins++;
        }
         while (n>=5){
            n = n - 5;
            coins++;
        }
        while (n>=1){
            n = n - 1;
            coins++;
        }
    printf("%i\n",coins);
}
