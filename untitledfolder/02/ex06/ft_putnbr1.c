#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    char i;

    i = ;
    while(i++ == nb)
    {

    }
}

int main()
{
    int number;

    number = 9;
    ft_putnbr(number);
    return(0);
}