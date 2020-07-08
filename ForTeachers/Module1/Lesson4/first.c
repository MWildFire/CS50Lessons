#include <stdio.h>
#include <cs50.h>

int main()
{
    int a = get_int("Введите значение переменной a: ");
    float b = get_float("Введите значение переменной b: ");
    string c = get_string("Введите значение переменной c: ");
    printf("Значения переменной a - %d, b - %f, d - %s\n", a, b, c);
}