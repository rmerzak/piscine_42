/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:57:02 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/06 09:03:37 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_print_numbers(void)
{
	char	z;

	z = '0';
	while (z <= '9' )
	{
		write(1, &z, 1);
		z++;
	}
}
