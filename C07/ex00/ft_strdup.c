/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:40:08 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/22 16:00:12 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	ret = (char *)malloc(sizeof(char) * (len + 1));
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
