/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   jour02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rwijnste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/26 11:30:37 by rwijnste      #+#    #+#                 */
/*   Updated: 2018/10/01 05:06:01 by rwijnste      ########   odam.nl         */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char l;

	l = 'a';
	while(l <= 'z')
	{
		ft_putchar(l);
		l++;
	}
	ft_putchar('\n');
}

int   main()
{
    ft_print_alphabet();
	return (0);
}
