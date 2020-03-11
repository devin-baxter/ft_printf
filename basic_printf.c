/* ************************************************************************** *//*0-]]
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:03:47 by debaxter          #+#    #+#             */
/*   Updated: 2020/03/09 11:10:16 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "basic_printf.h"
#include <stdio.h>

void			ft_vprintf(char *p, t_pfstruct *st)
{
	if (ft_syntax_error(&p, &st))
		return (0);
}

unsigned		ft_printf(const char *fmt, ...)
{
	t_pfstuct	st;
	char		*p;

	p = fmt;
	ft_set_struct(&st);
	while (*p)
	{
		if (*p == '%')
		{
			(*p)++;
			ft_vprintf(&p, &st);
		}
		else
		{
			ft_putchar(*p);
		}
		(*p)++;
	}
	return (st.print_count)
}
