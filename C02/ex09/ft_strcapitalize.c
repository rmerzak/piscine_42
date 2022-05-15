/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:47:38 by rmerzak           #+#    #+#             */
/*   Updated: 2021/08/10 17:23:00 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_not_alpha(char *c)
{
	if ((*c >= 'a' && *c <= 'z')
		|| (*c <= 'Z' && *c >= 'A')
		|| (*c >= '0' && *c <= '9'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_is_min(char *c)
{
	if ((*c >= 'a' && *c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	s;

	s = 0;
	ft_lowcase(str);
	if (str[0] <= 'z' && str[0] >= 'a')
	{
		str[0] -= 32;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_min(&str[i]) && s == 0)
			str[i] -= 32;
		if (ft_is_not_alpha(&str[i]))
			s = 0;
		else
			s = 1;
		i++;
	}
	return (str);
}
