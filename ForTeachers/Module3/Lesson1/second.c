#include <stdio.h>
#include <cs50.h>

void printn()
{
    int n = 53;
    n++;
    printf("n = %d\n", n);
}

int main()
{
    int a = 2;
    printn(); // 54
    printf("a = %d\n", a);
    {
        int n = 20;
        printf("n = %d\n", n);
    }
}