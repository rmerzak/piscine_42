/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:39:16 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/09 10:02:40 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_c_is_lowercase(char *c)
{
	if ((*c >= 'a' && *c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_c_is_lowercase(&str[i]))
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
