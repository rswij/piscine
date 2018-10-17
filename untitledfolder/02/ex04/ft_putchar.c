#include <unistd.h>

void ft_putchar(char c, int b)
{
    write(1, &c, sizeof(b));
}