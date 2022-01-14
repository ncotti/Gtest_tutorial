#include "functions.h"

int factorial (int n)
{
    int result = 1;

    /*if (n < 0)
    {
        return -1;
    }*/

    for (int i = 0; i <= n; i++)
    {
        if (!i)
        {
            continue;
        }
        result *= i;
    }

    return result;
}