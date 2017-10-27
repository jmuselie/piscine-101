/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 22:10:58 by jmuselie          #+#    #+#             */
/*   Updated: 2017/10/08 22:57:08 by jmuselie         ###   ########.fr       */
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
		return ;
	}
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_putline('o', 'o', '-', x);
		else if (length == 1)
			ft_putline('o', 'o', '-', x);
		else
			ft_putline('|', '|', ' ', x);
		length -= 1;
	}
}
