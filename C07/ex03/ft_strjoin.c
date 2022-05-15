/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:29:01 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/24 11:07:44 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	return (dest);
}

int	sum_of_len(int size, char **strs, int sep_size)
{
	int	i;
	int	len;

	i = 0;
	len = -1 * sep_size;
	while (i < size)
	{
		len += ft_strlen(strs[i]) + sep_size;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	if (size == 0)
	{
		tab = (char *)malloc(sizeof(char));
		return (tab);
	}
	len = sum_of_len(size, strs, ft_strlen(sep));
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		tab = ft_strcpy(tab, strs[i]);
		if (i < size - 1)
			tab = ft_strcpy(tab, sep);
		i++;
	}
	*tab = '\0';
	return (tab - len);
}
