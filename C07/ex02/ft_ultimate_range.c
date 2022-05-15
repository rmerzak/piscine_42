/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:45:58 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/24 11:06:40 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ran;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ran = (int *)malloc(sizeof(int) * (max - min));
	if (!ran)
		return (-1);
	while (min != max)
	{
		ran[i] = min;
		min++;
		i++;
	}
	*range = ran;
	return (i);
}
