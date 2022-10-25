extern int x;
extern int y;

int abs(void)
{
    if (x > y) {
        return (x - y);
    }
    else {
        return (y - x);
    }
}
