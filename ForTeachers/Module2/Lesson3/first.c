#include <stdio.h>
#include <math.h>
#include <cs50.h>

void adding()
{
    int x = get_int("Введите первое число: ");
    int y = get_int("Введите второе число: ");
    printf("Сумма двух чисел это %d\n", x + y);
}


float function(float x, float z)
{
    float y;
    y = x + z;
    return (y);
}

int fact(int num)
{
    if (num <= 1) return 1;
    else return num * fact(num-1);
}

int main()
{
    float a = 14.32;
    int b = round(a);
    printf("%d\n", b);
    double x = log(41.68);
    printf("%lf\n", x);
}