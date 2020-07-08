#include <cs50.h>
#include <stdio.h>

int main()
{
    int a, b, c;
    FILE * fout;
    fout = fopen("out.txt", "w");
    a = get_int("Введите первое число: ");
    b = get_int("Введите второе число: ");
    c = a + b;
    fprintf(fout, "%d %d %d", a, b, c);
    fclose(fout);
}