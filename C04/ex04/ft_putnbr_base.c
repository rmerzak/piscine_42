/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:19:20 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/16 10:04:56 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	ft_base(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_base(base) < 2)
		 return (0);
	while (base[i])
	{
		 if (base[i] == '+' || base[i] == '-')
			return (0);
		 j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		 i++;
	}
	 return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;

	n = nbr;
	if (ft_is_base(base))
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n < ft_base(base))
		{
			ft_putchar(base[n]);
		}
		else
		{
			ft_putnbr_base(n / ft_base(base), base);
			ft_putnbr_base(n % ft_base(base), base);
		}
	}
}
