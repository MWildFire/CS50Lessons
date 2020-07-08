#include <stdio.h>
#include <cs50.h>

int main()
{
    int count = 100;
    while (count > 0)
    {
        if (count == 50)
        {
            break;
        }
        printf("Прошла итерация цикла №%d\n", 101-count);
        count = count -1;
    }
}