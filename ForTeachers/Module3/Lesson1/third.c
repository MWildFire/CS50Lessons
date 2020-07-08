#include <stdio.h>
#include <cs50.h>

void display()
{
    static int i;
    i++;
    printf("i=%d\n", i);
}

int main()
{
    display();
    display();
    display();
}