#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Number: ");
    long long cc_number = get_long_long();

    //Test case
    //long long cc_number = 378282246310005;

    //declare variable for step 2, digits multiplied by 2 and added together
    int sum_digit2 = 0;
    //declare variable for step 3, remaining digits
    int sum_digit3 = 0;
    //declare variables for first and second numbers to check type later on.
    int first = 0;
    int second = 0;

    //Access every other digit from the end.
    long long temp = cc_number;
    for (int i = 0; temp > 0; i++)
    {
        int digit_1 = ((temp / 10) % 10) * 2;
        temp /= 10*10; // move along 2 digits

        //Access each digit in digit_1 and add together
        for (int j = 0; digit_1 > 0; j++)
        {
            int digit_2 = digit_1 % 10;
            digit_1 /= 10; // move along 1 digit
            sum_digit2 += digit_2;
        }
    }
    //Access and add each remaining digit (1st of pairs from end)
    long long temp2 = cc_number;
    for (int i = 0; temp2 > 0; i++)
    {
        int digit_3 = temp2 % 10;
        temp2 /= 10*10;
        sum_digit3 += digit_3;
    }
    //total to check
    int checksum = sum_digit2 + sum_digit3;
    int numbers = 0;

    //how many numbers?
    long long temp3 = cc_number;
    for(int j = 0; temp3 > 0; j++)
    {
        temp3 /= 10;
        numbers++;
    }

    //Check first two digits
    long long temp4 = cc_number;
    for (int i = 0; temp4 > 0; i++)
    {
        int digit_5 = temp4 % 10;
        temp4 /= 10;
        if (i == numbers - 2)
        {
            second = digit_5;
        }
        if (i == numbers - 1)
        {
            first = digit_5;
        }
    }
    //iterate to 2nd digit in checksum. Check if it is a 0, print card type
    for (int i = 0; i < 1; i++)
    {
        int digit_4 = checksum % 10;
        if (digit_4 == 0)
        {
            if ((first == 3 && second == 7) || (first == 3 && second == 4))
            {
                printf("AMEX\n");
            }
            if ((first == 5 && second == 1) || (first == 5 && second == 2) || (first == 5 && second == 3) || (first == 5 && second == 4) || (first == 5 && second == 5))
            {
                printf("MASTERCARD\n");
            }
            if (first == 4)
            {
                printf("VISA\n");
            }
        }
        if (digit_4 != 0)
        {
            printf("INVALID\n");
        }
    }
    return 0;
}


