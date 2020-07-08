#include <stdio.h>
#include <cs50.h>
#include <malloc.h>

int main()
{
    int * a;
    int i, n;

    n = get_int("Введите размер массива: ");
    a = (int*)malloc(n*sizeof(int));

    for (i = 0; i < n; i++)
    {
        a[i] = get_int("a[%d] = ", i);
    }

    for (i = 0; i < n; i++)
    {
       printf("%d\n", a[i]);
    }
    free(a);
}