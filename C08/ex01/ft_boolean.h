/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:58:21 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/23 17:15:30 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include<unistd.h>

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG 	"I have an odd number of arguments.\n"
# define SUCCESS	0
# define TRUE		1
# define FALSE		0
# define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)

typedef int	t_bool;
t_bool	ft_is_even(int nbr);
void	ft_putstr(char *str);

#endif
