#include <stdio.h>
#include <cs50.h>

void SelectionSort(int *num, int size)
{
    int min, temp;
    for (int i = 0; i < size -1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (num[j] < num[min])
                min = j;
        }
        temp = num[i];
        num[i] = num[min];
        num[min] = temp;
    }
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = get_int("Введите элемент массива: ");
    }
    SelectionSort(a, 10);

    for (int i = 0; i < 10; i++)
        printf("%d\n", a[i]);
}