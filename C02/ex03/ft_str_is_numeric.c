/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:15:34 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/09 10:01:53 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_car_is_numeric(char *c)
{
	if (*c >= '0' && *c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_car_is_numeric(&str[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
