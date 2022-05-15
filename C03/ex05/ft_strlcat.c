/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:16:08 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/14 14:52:00 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lend;
	unsigned int	n;

	i = 0;
	lend = ft_str_len(dest);
	if (ft_str_len(dest) >= size)
	{
		return (size + ft_str_len(src));
	}
	else
	{
		n = ft_str_len(dest);
		while (src[i] && n < size - 1)
		{
			dest[n] = src[i];
			i++;
			n++;
		}
		dest[n] = '\0';
		return (ft_str_len(src) + lend);
	}
}
