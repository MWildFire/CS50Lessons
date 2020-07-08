#include <stdio.h>
#include <cs50.h>

int main()
{
    int num1 = get_int("Введите значение первого числа: ");
    int num2 = get_int("Введите значение второго числа: ");
    int num3 = get_int("Введите значение третьего числа: ");
    if (num1 > num2 || num1 > num3)
    {
        printf("Первое число (%d) больше, чем второе число (%d и третье число(%d))", num1, num2, num3);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Второе число (%d) больше, чем первое число (%d), и чем третье число(%d)", num2, num1, num3);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("Третье число (%d) больше, чем первое число (%d), и чем второе число(%d)", num3, num1, num2);
    }
    else if (num1 == num2 && num3 == num1)
    {
        printf("Эти числа равны");
    }
}