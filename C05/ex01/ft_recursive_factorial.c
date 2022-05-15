/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:34:46 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/21 18:36:23 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		if (nb == 0)
		{
			return (1);
		}
		else
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
	}
}
