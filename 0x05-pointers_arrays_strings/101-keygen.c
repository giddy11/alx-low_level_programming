#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    srand(time(NULL));

    for (i = 0; i < 15; i++)
    {
        int k = rand() % 128;
        if ((k >= 65 && k <= 90) || (k >= 97 && k <= 122) || (k >= 32 && k <= 33))
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
