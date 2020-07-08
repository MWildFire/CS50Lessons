#include <stdio.h>
#include <cs50.h>
// standart input output

int n = 5;

void printn()
{
    n++;
    printf("n = %d\n", n);
}

int main()
{
    printn();
    n++;
    printf("n = %d\n", n);
}