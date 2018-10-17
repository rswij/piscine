#include <stdio.h>

void    ft_ft(int *nbr)
{
    printf("%d\n", *nbr);
    *nbr = 42;
    printf("%d\n", *nbr);
}
int main()
{
    int a;
    int *b;

    a = 12;
    b = &a;
    ft_ft(b);
    return(0);
}