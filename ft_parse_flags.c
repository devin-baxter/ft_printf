/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <debaxter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:47:52 by debaxter          #+#    #+#             */
/*   Updated: 2020/01/20 15:57:43 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parse_flags(const char *p, pf_flags *flags)
{
	while (FLAG_CHK)
	{
		if (*p == '-')
			*flags->minus = 1;
		if (*p == '+')
			*flags->plus = 1;
		if (*p == ' ')
			*flags->space = 1;
		if (*p == '0')
			*flags->zero = 1;
		if (*p == '#')
			*flags->hash = 1;
		*p++;
	}
	return (1);
}


