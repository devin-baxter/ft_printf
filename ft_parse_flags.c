/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <debaxter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:47:52 by debaxter          #+#    #+#             */
/*   Updated: 2020/01/29 13:39:10 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parse_flags(const char *p, pf_struct *st)
{
	while (FLAG_CHK)
	{
		if (*p == '-')
			*st->flags->minus = 1;
		if (*p == '+')
			*st->flags->plus = 1;
		if (*p == ' ')
			*st->flags->space = 1;
		if (*p == '0')
			*st->flags->zero = 1;
		if (*p == '#')
			*st->flags->hash = 1;
		*p++;
	}
	return (1);
}


