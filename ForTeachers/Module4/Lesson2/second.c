#include <stdio.h>
#include <cs50.h>

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A;
    printf("%d\n", A[3]);
    printf("%d\n", *(A+3));
    printf("%d\n", *(p+3));
}