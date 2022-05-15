/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:10:34 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/09 10:03:39 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_c_is_uppercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_c_is_uppercase(&str[i]))
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
