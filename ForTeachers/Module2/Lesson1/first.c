#include <stdio.h>
#include <cs50.h>

int main()
{
    int count  = 10;
    int sum = 0;
    int n;
    while (count > 0)
    {
        n = get_int("Введите число: ");
        sum += n;
        count -= 1;
    }
    printf("Сумма десяти чисел это %d \n", sum);
}