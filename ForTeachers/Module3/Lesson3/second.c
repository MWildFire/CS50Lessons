#include <stdio.h>
#include <cs50.h>

void bubbleSort(int * num, int size)
{
    for (int i = 0; i < size -1; i++)
    {
        for (int j = (size - 1); j > i; j --)
        {
            if (num[j-1] > num[j])
            {
                int temp = num[j-1];
                num[j-1] = num[j];
                num[j] = temp;
            }
        }
    }
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = get_int("Введите элемент массива: ");
    }
    bubbleSort(a, 10);

    for (int i = 0; i < 10; i++)
        printf("%d\n", a[i]);
}