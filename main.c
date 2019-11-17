#include <stdio.h>
#include "myMath.h"
double f1(double x)
{
    double ans;
    ans = sub(add((float)Exp((int)x), (float)Pow((int)x, 3)), 2);
    return ans;
}

double f2(double x)
{
    double ans;
    ans = add((float)mul(x, 3), (float)mul(Pow(x, 2), 2));
    return ans;
}

double f3(double x)
{
    double ans;
    ans = sub((float)div(mul(Pow(x, 3), 4), 5), (float)mul(x, 2));
    return ans;
}

int main()
{
    double x;
    printf("Please insert a real number: ");
    scanf("%lf", &x);
    printf("the value of f(x) = e^x+x^3-2 at the point %.4f  is: %.4f \n", x, f1(x));
    printf("the value of f(x) = 3x+2x^2 at the point %.4f  is: %.4f \n", x, f2(x));
    printf("the value of f(x) = (4x^3)/5-2x at the point %.4f  is: %.4f \n", x, f3(x));
    return 0;
}