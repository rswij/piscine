/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   jour03.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rwijnste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/29 09:41:17 by rwijnste      #+#    #+#                 */
/*   Updated: 2018/09/29 10:27:00 by rwijnste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1 );
	return (0);
}

int ft_nputchar(char c, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i = i + 1;
	}
	return (0);
}

int main()
{
	ft_nputchar('@', 12);
	ft_putchar('\n');
	return (0);
}
