#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int f;

    printf("%d\t %d\n", *a, *b);
    f = *a;
    *a = *b;
    *b = f;
    printf("%d\t %d\n", *a, *b);
}
int main()
{
    int a;
    int b;
    int *c;
    int *d;

    a = 12;
    b = 42;
    c = &a;
    d = &b;
   ft_swap(c, d);
    return(0);
}