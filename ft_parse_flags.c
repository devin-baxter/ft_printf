/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:47:52 by debaxter          #+#    #+#             */
/*   Updated: 2020/01/13 18:26:15 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parse_flags(const char *p, pf_flags *flags)
{
	while (FLAG_CHK)
	{
		if (*p == '-')
			*flags->minus = 1;
		else if (*p == '+')
			*flags->plus = 1;
		else if (*p == ' ')
			*flags->space = 1;
		else if (*p == '0')
			*flags->zero = 1;
		else if (*p == '#')
			*flags->hash = 1;
		*p++;
	}
	return (1);
}


