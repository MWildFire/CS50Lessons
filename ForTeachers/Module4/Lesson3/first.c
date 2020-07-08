#include <cs50.h>
#include <stdio.h>

int main()
{
    FILE * fp;
    string name = "text.txt";
    if ((fp = fopen(name, "r")) == NULL)
    {
        printf("Не удалось открыть файл");
    }
    else
    {
        //
        //
    }
    fclose(fp);
}