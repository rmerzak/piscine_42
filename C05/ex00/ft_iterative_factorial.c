/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:37:09 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/17 09:28:45 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
