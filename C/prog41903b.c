#include <stdio.h>

extern int x, y;

int abs(void)
{
    if (x > y) {
        return (x - y);
    }
    else {
        return (y - x);
    }
}
