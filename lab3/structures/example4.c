#include <stdio.h>

int main(int argc, char const *argv[])
{

    typedef struct {
    char * brand;
    int model;
} vehicle;

    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;

    return 0;
}
