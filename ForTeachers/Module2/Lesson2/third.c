#include <stdio.h>
#include <cs50.h>

int main()
{
    int a = get_int("Введите первое число: ");
    int b = get_int("Введите второе число: ");
    if (a > b)
    {
        for (int i = a; i >=b; i -=1)
        {
            printf("Вывожу число %d\n", i);
        }
    }
    else if (b > a)
    {
        for (int i = a; i <= b; i += 1)
        {
            printf("Вывожу число %d\n", i);
        }
    }
}