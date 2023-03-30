#include <stdio.h>
#include <stdlib.h>

int main()
{
    double array[3];
    double average;
    double sum;

    for(int i = 0; i < 3; ++i) {
        printf("Enter a number:");
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    
    printf("The array is: [%f, %f, %f]", array[0], array[1], array[2]); 
    average = (double) sum / 3;
    printf("The average of the array values is %f", average);


    return 0;

}