/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:02:19 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/06 09:06:57 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if ((a != '7' || b != '8' || c != '9' ))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9' )
	{
		while (b <= '9' )
		{
			while (c <= '9' )
			{
				print(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}
