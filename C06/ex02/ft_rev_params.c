/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 07:58:21 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/18 08:19:21 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc >= 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[argc - 1][j])
			{
				write(1, &argv[argc - 1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
