/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:47:52 by debaxter          #+#    #+#             */
/*   Updated: 2020/01/09 19:42:38 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_minus(*p, *flags)
{
	
		if (*flag->minus == 1)
			return (1);
		else
			*flag->minus = 1;
}

int		ft_parse_flags(*p, *flags)
{
	if (*p == '-')
	{


		else
		{
			*flag->minus = 1;
		}
		*p++;
	}
	if (*p == '+')
	{
		if (*flag->plus == 1)
			return (2);
		else
		{
			*flag->plus = 1;
		}
		*p++;
	}
	if (*p == ' ')
	{
		if (*flag->space == 1)
			return (3);
		else
		{
			*flag->space = 1;
		}
		*p++;
	}
	if 
}
