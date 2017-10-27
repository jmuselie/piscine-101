/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 22:11:10 by jmuselie          #+#    #+#             */
/*   Updated: 2017/10/08 22:53:23 by jmuselie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void);

int		ft_putchar(char c);

void	ft_putline(char start, char end, char fill, int length)
{
	ft_putchar(start);
	while (length > 2)
	{
		ft_putchar(fill);
		length -= 1;
	}
	if (length == 2)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int length;

	if (x <= 0 || y <= 0)
	{
		write(1, "Mauvaise entree, try again\n", 26);
		return ;
	}
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_putline('/', '\\', '*', x);
		else if (length == 1)
			ft_putline('\\', '/', '*', x);
		else
			ft_putline('*', '*', ' ', x);
		length -= 1;
	}
}
