#include <stdio.h>
#include <cs50.h>

struct list
{
    int field;
    struct list ptr *;
}

struct list * init(int a)
{
    struct list * 1st;
    1st = (struct list*)malloc(sizeof(struct list));
    1st-> field = a;
    1st->ptr = NULL;
    return(1st);
}

struct list * addelem(list * 1st, int number)
{
    struct list *temp, *p;
    temp = struct list*)malloc(sizeof(struct list));
    p = 1st -> ptr;
    1st-> ptr = temp
    temp -> field = number;
    temp -> ptr = p;
    return (temp);
}

struct list * deleteElem(list * 1st, list * root)
{
    struct list * temp;
    temp = root;
    while (temp -> ptr != 1st)
    {
        temp = temp ->ptr;
    }
    temp-> ptr = 1st-> ptr;
    free(1st);
    return temp;
}

struct list * deletehead(list * root)
{
    struct list * temp;
    temp = root -> ptr;
    free(root);
    return(temp);
}

void listprint(list * 1st)
{
    struct list * p;
    do {
        printf("%d", p->field);
        p = p -> ptr;
    } while(p != NULL);

}


int main()
{

}
