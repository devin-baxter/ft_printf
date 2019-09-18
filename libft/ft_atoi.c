/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 18:40:54 by debaxter          #+#    #+#             */
/*   Updated: 2018/05/25 16:08:34 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static int	ft_is_space(char c)
//{
//	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' ||
//		c == '\r')
//		return (1);
//	return (0);
//}

int			ft_atoi(char const *str)
{
	const char	*s;
	int long	result;
	int long	temp;
	int			neg;

	s = str;
	while (*s && ft_isspace(*s))
		s++;
	neg = 1;
	if (*s == '+' || *s == '-')
		if (*s++ == '-')
			neg = -1;
	result = 0;
	while (*s >= '0' && *s <= '9')
	{
		temp = result * 10 + neg * (*s++ - '0');
		if (neg > 0 && temp < result)
			return (-1);
		if (neg < 0 && temp > result)
			return (0);
		result = temp;
	}
	return ((int)result);
}
