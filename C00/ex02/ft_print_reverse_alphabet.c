/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:39:47 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/05 18:07:44 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a' )
	{
		write(1, &z, 1);
		z--;
	}
}
