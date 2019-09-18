/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:40:31 by debaxter          #+#    #+#             */
/*   Updated: 2019/09/18 14:43:34 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

int		ft_value(char c)
{
	if (c >= '0' && c <= '9')
		return ((int)c - '0');
	else
		return ((int)c - 'A' + 10);
}

int		ft_btod(char *str, int base)
{
	int		len;
	int		power;
	int		num;
	int		i;

	len = ft_strlen(str);
	power = 1;
	num = 0;
	i = len - 1;
	while (i >= 0)
	{
		if (ft_value(str[i]) >= base)
		{
			printf("Invalid Number");
			return (-1);
		}
		num += ft_value(str[i]) * power;
		power = power * base;
		i--;
	}
	return (num);
}

int		main(void)
{
	char	str[] = "A11";
	int		base = 16;
	
	printf("Decimal equivalent of %s in base %d is %d\n", str, base,
			ft_btod(str, base));
	return (0);
}
