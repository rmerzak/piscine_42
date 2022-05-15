/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:22:21 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/07 16:03:15 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	j = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			j++;
		}
		swap (&tab[min], &tab[i]);
		i++;
	}
}
