#include <stdio.h>
#include <cs50.h>

int main()
{
    int count = 100;
    while (count > 0)
    {
        count = count -1;
        if (count == 50)
        {
            continue;
        }
        printf("Прошла итерация цикла №%d\n", 101-count);

    }
}