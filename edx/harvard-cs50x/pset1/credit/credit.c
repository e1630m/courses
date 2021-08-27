#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_number(char card[])
{
    for (int i = 0; card[i] != '\0'; i++)
    {
        if (!isdigit(card[i]))
        {
            return 0;
        }
    }
    return 1;
}

int luhn(char card[])
{
    long long int llcard = atoll(card);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < strlen(card); i++)
    {
        if (!(i % 2))
        {
            sum1 += llcard % 10;
        }
        else
        {
            if (llcard % 10 * 2 >= 10)
            {
                sum2 += (llcard % 10 * 2) % 10 + 1;
            }
            else
            {
                sum2 += llcard % 10 * 2;
            }
        }
        llcard /= 10;
    }
    return (!((sum1 + sum2) % 10));
}
int main(void)
{
    while (1)
    {
        char card[100];
        printf("Number: ");
        scanf("%s", card);
        int length = strlen(card);
        int f = card[0] - '0', s = card[1] - '0';
        if (is_number(card))
        {
            if (luhn(card))
            {
                if (length == 15 && f == 3 && (s == 4 || s == 7))
                {
                    printf("AMEX\n");
                }
                else if (f == 4 && length == 13)
                {
                    printf("VISA\n");
                }
                else if (length == 16)
                {
                    if (f == 5 && 0 < s && s < 6)
                    {
                        printf("MASTERCARD\n");
                    }
                    else if (f == 4)
                    {
                        printf("VISA\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
                else
                {
                    printf("INVALID\n");
                }
                break;
            }
            printf("INVALID\n");
            break;
        }
    } 
}
