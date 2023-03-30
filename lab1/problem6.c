#include <stdio.h>
#include <stdlib.h>

int compare(const void *x_void, const void *y_void)
{
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return x - y;
}

int main()
{
    int array[5];
    int length = 5;

    for(int i = 0; i < 5; ++i) {
        printf("Enter a number:");
        scanf("%d", &array[i]);

        if(array[i] >= 100){
            printf("input must be less than 100.\n");
            
        }
    }
    
    qsort(array, length, sizeof(int), compare);

    printf("The array is: [%d, %d, %d, %d, %d]", array[0], array[1], array[2], array[3], array[4]); 

    return 0;

}