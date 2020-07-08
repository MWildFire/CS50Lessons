#include <stdio.h>
#include <cs50.h>


int BinarySearch(int[] array, int key, int left, int right)
{
    int mid = left +(right - left)/ 2;
    if (array[mid] == key)
        return mid;
    
    else if (array[mid] > key)
        return BinarySearch(array, key, left, mid);
    else 
        return BinarySearch(array, key, mid +1, right);
}

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

const int N = 10;

int main()
{
    int mass[N], max, min;

    for (int i = 0; i < N; i++)
    {
        mass[i] = get_int("Введите элемент массива: ");
    }

    max = mass[0];
    min = mass[0];
    for (int r = 1; r < N; r++)
    {
        if (max < mass[r]) max = mass[r];
        if (min > mass[r]) min = mass[r];
    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

}