

void ft_putchar(char c);

void ft_print_numbers(void)
{
    int i;

    i = '0';
    while (i <= '9')
    {
        ft_putchar(i);
        i++;
    }
    ft_putchar('\n');
}

int main()
{
    ft_print_numbers();
    return (0);
}