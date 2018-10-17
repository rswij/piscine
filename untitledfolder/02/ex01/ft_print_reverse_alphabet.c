#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_reverse_alphabet(void)
{
	char l;

	l = 'z';
	while(l >= 'a')
	{
		ft_putchar(l);
		l = l - 1;
	}
}

int   main()
{
    ft_reverse_alphabet();
	ft_putchar('\n');
	return (0);
}