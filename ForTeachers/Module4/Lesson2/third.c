#include <stdio.h>
#include <cs50.h>

int main()
{
    int a = 100;
    int *p_a = &a;
    printf("a = %d\n", a);
    printf("a = %d\n", *p_a);

    *p_a = 50;

    printf("%p\n", p_a);

    p_a = NULL;
    printf("%p\n", p_a);
}