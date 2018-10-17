void	ft_putchar(char c, int b);

void	ft_print_comb(void)
{
	int	first;
	
	
	first = 000;
	
	while (first <= 999)
	{
		ft_putchar(first, first);
		ft_putchar(',', sizeof(','));
		first++;
	}
}

int main()
{
    ft_print_comb();
    return (0);
}