#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    double array1[3];
    double array2[3];
    double array3[6];
    int index = 0;
    
// Enter array 1 values

    printf("--------------------------------\nEnter the first array's values\n--------------------------------\n");

    for(int i = 0; i < 3; ++i) {
        printf("Enter a number:");
        scanf("%lf", &array1[i]);
    }

// Enter array 2 values

    printf("--------------------------------\nEnter the second array's values\n--------------------------------\n");

    for(int i = 0; i < 3; ++i) {
        printf("Enter a number:");
        scanf("%lf", &array2[i]);
    }

// Merge arrays

    for(int i = 0; i < 3; ++i) {
        array3[index++] = array1[i];
    }
    
    for(int i = 0; i < 3; ++i) {
        array3[index++] = array2[i];
    }

    printf("The 1st array is: [%f, %f, %f]", array1[0], array1[1], array1[2]);
    printf("\nThe 2nd array is: [%f, %f, %f]", array2[0], array2[1], array2[2]);

    printf("\nThe merged array is [%f, %f, %f, %f, %f, %f]", array3[0], array3[1], array3[2], array3[3], array3[4],array3[5]);

    return 0;

}