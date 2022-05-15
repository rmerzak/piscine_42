/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:36:54 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/16 19:17:19 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_space(char *c)
{
	if (*c == '\t' || *c == '\f' || *c == '\v' || *c == '\n'
		|| *c == '\r' || *c == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sgn;
	int	nb;

	i = 0;
	sgn = 1;
	nb = 0;
	while (is_space(&str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
		{
			sgn *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (sgn * nb);
}
