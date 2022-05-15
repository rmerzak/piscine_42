/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:01:03 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/23 14:51:03 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include<stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*re;
	int		i;
	int		len;

	i = 0;
	len = ft_len(src);
	re = (char *)malloc(sizeof(char) * (len + 1));
	if (!re)
		return (NULL);
	while (src[i])
	{
		re[i] = src[i];
		i++;
	}
	re[i] = '\0';
	return (re);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*stks;

	i = 0;
	stks = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!stks)
		return (NULL);
	while (i < ac)
	{
		stks[i].size = ft_len(av[i]);
		stks[i].str = av[i];
		stks[i].copy = ft_strdup(av[i]);
		i++;
	}
	stks[i].str = 0;
	return (stks);
}
