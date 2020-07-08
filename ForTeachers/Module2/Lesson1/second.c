#include <stdio.h>
#include <cs50.h>

int main()
{
    int count = 0;
    while (count > 0)
    {
        printf("Это была итерация цикла №%d\n", count + 1);
        count = count + 1;
    }
}