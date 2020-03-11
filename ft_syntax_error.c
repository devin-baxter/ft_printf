/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syntax_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:14:38 by debaxter          #+#    #+#             */
/*   Updated: 2020/03/09 11:15:11 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_printf.h"

int			ft_syntax_error(char *p, t_pfstruct *st)
{
	unsigned	c;

	c = 0;
	ft_flag_error(&p, &st, &c);
	ft_width_error(&p, &st, &c);
	ft_period_error(&p, &st, &c);
	ft_prec_error(&p, &st, &c);
	ft_length_error(&p, &st, &c);
	ft_type_error(&p, &st, &c);
}