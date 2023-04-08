#include <stdio.h>

int main()
{
    /* draws a point at 10, 5 */
    struct point p;
    p.x = 10;
    p.y = 5;
    draw(p);

    return 0;
}
