//2.	Даны стороны прямоугольника a и b. Найти его площадь S = a·b и периметр P = 2·(a + b).
#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Введите первую сторону: ");
    scanf("%d", &a);
    printf("Введите вторую сторону: ");
    scanf("%d", &b);
    printf("Периметр прямоугольника это %d\nПлощадь прямоугольника это %d\n", 2*(a+b), a*b);

}
