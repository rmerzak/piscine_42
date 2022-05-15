/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:35:19 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/09 18:29:49 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_c_is_printable(char *c)
{
	if (*c >= 32 && *c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_c_is_printable(&str[i]))
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
