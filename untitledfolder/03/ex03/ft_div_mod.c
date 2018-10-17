#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    printf("%d\t%d\t%d\t%d\n", a, b, *div, *mod);
    *div = a / b;
    *mod = a % b;
    printf("%d\t%d\t%d\t%d\n", a, b, *div, *mod);
}

int main()
{
    int div1, mod1;
    int *div, *mod;


    div = &div1;
    mod = &mod1;

    ft_div_mod(345 ,30 ,div ,mod );

    return(0);
}