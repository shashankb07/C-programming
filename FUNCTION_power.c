#include<stdio.h>

power(int x, int y);

int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        pritnf("%d %d %d\n", i , power(2,i), power(-3, i));
        return 0;
    }
}