/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:26:35 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/12 11:14:29 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i + j] == to_find[j])
		{
			while (to_find[j] == str[i + j])
			{
				j++;
				if (to_find[j] == '\0')
				{
					return (&str[i]);
				}
			}
		}
		i++;
	}
	return (0);
}
