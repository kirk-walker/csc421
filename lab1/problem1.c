#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char string [256];

    printf("Input an integer: ");
    fgets (string, 256, stdin);

    i = atoi (string);

    printf("Output: %d", i + 5);


    return 0;
}