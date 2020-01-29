/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <debaxter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 13:35:09 by debaxter          #+#    #+#             */
/*   Updated: 2020/01/26 13:18:51 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int		basic_printf(const char *fmt, ...)
{
	PF_VARIABLES;
	va_list		ap;
	pf_struct	*st;

	p = fmt;
	va_start(ap, fmt);
	while (*p)
	{
		if (*p == '%')
		{
			*p++;
			if (FLAG_CHK)
				ft_parse_flags(*p, *st);
			else if (WIDTH_CHK)
			{
				if (
					return (1)
				ft_atoi(*p)
			}
			else if (*p == '.')
			{
				*p++;
				if (
			}
		}
		else
		{
			ft_putchar(*p);
		}
		*p++;
	}
}

int			main(int argc, char *argv[])
{
	char	*str = "I love learning how to code in C!\n";

	while (*str)
	{
		putchar(*str++);
	}
	basic_printf("I really do love learning how to code!\n %d\t%i", 8, 42);
	return (0);
}
