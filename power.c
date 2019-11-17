#include "myMath.h"
#define _e 2.718281828459

double Exp(int x)
{
    if (x == 0)
    {
        return 1;
    }
    double ans = 1;
    if (x > 0)
    {
        while (x > 0)
        {
            ans *= _e;
            x--;
        }
    }
    else
    {
        while (x < 0)
        {
            ans /= _e;
            x++;
        }
    }
    return ans;
}

double Pow(double x, int y)
{
       if (y == 0)
    {
        return 1;
    }
    double ans = 1;
    if (y > 0)
    {
        while (y > 0)
        {
            ans *= x;
            y--;
        }
    }
    else
    {
        while (y < 0)
        {
            ans /= x;
            y++;
        }
    }
    return ans;
}