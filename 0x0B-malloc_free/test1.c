#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *str = malloc(sizeof(char) * 2);
    if (str == NULL)
        return (1);
    str[0] = 'H';
    str[1] = 'e';

    printf("%s\n", str);
    free(str);

    return (0); 
}
