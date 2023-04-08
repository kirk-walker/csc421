#include <stdio.h>

int main()
{

    struct operator {
        int type;
        union {
            int intNum;
            float floatNum;
            double doubleNum;
        }; 
    };

    operator op;
    op.type = 0; // int
    // intNum is part of the union, but since it's not named you access it directly off the struct itself
    op.intNum = 352;

    return 0;
}
