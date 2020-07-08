#include <stdio.h>
#include <cs50.h>

struct date
{
    int day;
    string month;
    int year;
};

int main()
{
    struct date thisday;
    thisday.day = get_int("Введите день: ");
    thisday.month = get_string("Введите месяц: ");
    thisday.year = get_int("Введите год: ");
    printf("Сегодня %d месяц: %s %d года \n", thisday.day, thisday.month, thisday.year);
}