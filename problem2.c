#include <stdio.h>

int main() {
    int h = 5, w = 3;
    int area = h * w;
    int perimeter = 2*(h + w);

    printf("Perimeter of the rectangle = %d inches.", perimeter);
    printf("\nArea of the rectangle = %d square inches.", area);
    return 0;
}