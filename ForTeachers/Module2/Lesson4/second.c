#include <stdio.h>
#include <cs50.h>

int main()
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        a[i] = get_int("Введите элемент массива: ");
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}