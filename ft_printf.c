/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:57:23 by debaxter          #+#    #+#             */
/*   Updated: 2019/09/18 19:05:52 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft/libft.h"

void	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		integer;

	va_start(args, fmt);
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'd' || *fmt == 'i')
			{
				integer = va_arg(args, int);
				ft_putnbr(integer);
			}
		}
		else
			ft_putchar(*fmt);
		fmt++;
	}
	va_end(args);
}

int		main(int argc, const char *argv[])
{
	ft_printf("Hello world!\nI am %d years old and I have %i cats.\nThey are Astrid and Declan, and they are %d months old.\n", 30, 2, 5);
	return (0);
}
