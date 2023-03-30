#include <stdio.h>
#include <stdlib.h>

int main()
{
    double array[5];

    array[0] = 5.00;
    array[1] = 8.00;
    array[2] = 10.00;
    array[3] = 13.00;
    array[4] = 19.00;

    printf("The array is [%f, %f, %f, %f, %f]\n", array[0], array[1], array[2], array[3], array[4]);
    printf("The sum of the array is %f", array[0] + array[1] + array[2] + array[3] + array[4]);

    return 0;

}