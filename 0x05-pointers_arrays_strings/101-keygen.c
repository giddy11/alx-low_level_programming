#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    srand(time(NULL));

    for (i = 0; i < 50; i++)
    {
        int k = rand() % 128;
        if ((k >= 48 && k <= 57) || (k >= 65 && k <= 90) || (k >= 97 && k <= 122) || (k >= 58 && k <= 64))
        {
            printf("%c", k);
        }
        else
        {
            i--;
        }
    }
    printf("\n");

    return (0);
}
