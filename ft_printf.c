/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:57:23 by debaxter          #+#    #+#             */
/*   Updated: 2019/09/20 15:55:25 by debaxter         ###   ########.fr       */
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

int		main(void)
{
	int		age;
	int		cats;
	int		cats_age;

	age = 30;
	cats = 2;
	cats_age = 5;
	ft_printf("Hello world!\n");
	ft_printf("I am %d years old and I have %i cats.\n", age, cats);
	ft_printf("They are %d months old.\n", cats_age);
	return (0);
}
