/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:12:08 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/16 19:21:45 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_len_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_space(char base)
{
	if (base == ' ' || base == '\f' || base == '\n'
		|| base == '\r' || base == '\t' || base == '\v')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_len_base(base) < 2)
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || ft_is_space(base[i]))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_value_indice_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	i;
	long int	sgn;
	long int	res;

	i = 0;
	sgn = 1;
	res = 0;
	if (ft_is_base(base))
	{
		while (ft_is_space(str[i]))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sgn *= -1;
			i++;
		}
		while (ft_value_indice_in_base(base, str[i]) != -1)
		{
			res *= ft_len_base(base);
			res += ft_value_indice_in_base(base, str[i]);
			i++;
		}
	}
	return (res * sgn);
}
