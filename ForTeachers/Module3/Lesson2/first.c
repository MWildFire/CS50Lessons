#include <stdio.h>
#include <cs50.h>


int search(int *k, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (k[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int k[8];
    int point;
    for (int i = 0; i < 8; i++)
    {
        k[i] = get_int("Введите k[%d]: ", i);
    }

    point = search(k, 8, 3);
    if (point == -1)
    {
        printf("Элементов, равных 3 в массиве нет\n");
    }
    else
    {
        printf("Элемент с индексом %d равен 3\n", point);
    }
}