#include <stdio.h>
#include <cs50.h>

int main()
{
    int count = 0;
    do
    {
        printf("Это была итерация цикла №%d\n", count + 1);
        count = count + 1;
    }while (count > 0);
}