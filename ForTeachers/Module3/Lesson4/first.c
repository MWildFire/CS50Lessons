#include <stdio.h>
#include <cs50.h>

void InsertionSort(int n, int mass[])
{
    int newElement, location;
    for (int i = 1; i < n; i++)
    {
        newElement = mass[i];
        location = i - 1;
        while (location >= 0 && mass[location] > newElement)
        {
            mass[location+1] = mass[location];
            location = location -1;
        }
        mass[location +1] = newElement;
    }
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = get_int("Введите элемент массива: ");
    }
    InsertionSort(10, a);

    for (int i = 0; i < 10; i++)
        printf("%d\n", a[i]);
}