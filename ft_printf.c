/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 13:35:09 by debaxter          #+#    #+#             */
/*   Updated: 2019/12/21 16:11:16 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

#define FLAG_CHK (*p == '-' || *p == '+' || *p == ' ' ||*p == '0' || *p == '#')
#define LNG_CHK (*p == 'h' || *p == 'l' || *p == 'L' || *p == 'z'\
		|| *p == 'j' || *p == 't')

void		basic_printf(const char *fmt, ...)
{
	va_list		ap;
	char		*p, *sval;
	int			ival;
	double		dval;
	int			w;
	int			prec;
	char		len[3];
	int			flag_count;

	p = fmt;
	*sval = NULL;
	ival = 0;
	dval = 0;
	flag_count = 0
	va_start(ap, fmt);
	while (*p)
	{
		if (*p != '%')
		{
			ft_putchar(*p);
			p++;
		}
		else
		{
			if (FLAG_CHK && flag_count < 6)
			{
				ft_parse_flags(*p);
				flag_count++;
				p++;
			}
			flag_count = 0;
			else if (ft_isdigit(*p) == 1)
			{
				ft_handle_width(*p);
			}

		}
		p++;
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
