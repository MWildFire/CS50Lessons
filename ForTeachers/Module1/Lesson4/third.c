#include <stdio.h>
#include <cs50.h>

int main()
{
    int a = 7, b;
    float g = 9.81, v;

    b = (int) g;
    v = (float)a;
    b *=2;
    printf("%d\n", b);
}