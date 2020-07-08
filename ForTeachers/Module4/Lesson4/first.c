#include <stdio.h>
#include <cs50.h>

struct date{
    int day;
    string month;
    int year;
};

struct persone
{
  string lastname;
  string firstname;
  struct date bd;
};

int main()
{
    struct persone p;
    p.firstname = get_string("Введите имя: ");
    p.lastname = get_string("Введите фамилию: ");
    p.bd.day = get_int("Введите дату рождения\nЧисло: ");
    p.bd.month = get_string("Месяц: ");
    p.bd.year = get_int("Год: ");
    printf("\nВы ввели: %s %s, дата рождения %d %s %d года", p.firstname, p.lastname, p.bd.day, p.bd.month, p.bd.year);
}