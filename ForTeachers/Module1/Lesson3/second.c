#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    printf("Введите значение переменной a: ");
    scanf("%d", &a);
    printf("Введите значение переменной b: ");
    scanf("%f", &b);
    printf("Введите значение переменной c: ");
    scanf("%c", &c);
    printf("Значения переменной a - %d, b - %f, d - %c\n", a, b, c);
}