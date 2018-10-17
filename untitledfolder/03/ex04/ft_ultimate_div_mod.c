#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int c, d;


    printf("%d\t%d\n", *a, *b);
    c = *a / *b;
    d = *a % *b;
    *a = c;
    *b = d;
    printf("%d\t%d\n", *a, *b);
}

int main()
{
    int a, b;
    int *c, *d;

    a = 345;
    b = 12;
    c = &a;
    d = &b;

    ft_ultimate_div_mod(c ,d);

    return(0);
}