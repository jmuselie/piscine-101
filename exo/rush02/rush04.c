/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 22:11:56 by jmuselie          #+#    #+#             */
/*   Updated: 2017/10/08 22:54:22 by jmuselie         ###   ########.fr       */
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
			ft_putline('A', 'C', 'B', x);
		else if (length == 1)
			ft_putline('C', 'A', 'B', x);
		else
			ft_putline('B', 'B', ' ', x);
		length -= 1;
	}
}
