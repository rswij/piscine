#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    printf("%d\n", *********nbr);
    *********nbr = 42;
    printf("%d\n", *********nbr);
}

int main()
{
    int a;
    int *b;
    int **c;
    int ***d;
    int ****e;
    int *****f;
    int ******g;
    int *******h;
    int ********i;
    int *********j;
    
    a = 12;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;
    i = &h;
    j = &i;

    ft_ultimate_ft(j);
    return(0);
}