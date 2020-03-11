/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:08:46 by debaxter          #+#    #+#             */
/*   Updated: 2020/03/09 11:14:26 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_printf.h"

void			ft_zero_types(t_pfstruct *st)
{
	*st->types->d = 0;
	*st->types->i = 0;
	*st->types->n = 0;
	*st->types->o = 0;
	*st->types->u = 0;
	*st->types->x = 0;
	*st->types->X = 0;
	*st->types->a = 0;
	*st->types->A = 0;
	*st->types->e = 0;
	*st->types->E = 0;
	*st->types->f = 0;
	*st->types->F = 0;
	*st->types->ch = 0;
	*st->types->str = 0;
	*st->types->ptr = 0;
}

void			ft_zero_struct(t_pfstruct *st)
{
	*st->errors->fl = 0;
	*st->errors->wi = 0;
	*st->errors->per = 0;
	*st->errors->pre = 0;
	*st->errors->le = 0;
	*st->errors->ty = 0;
	*st->flags->minus = 0;
	*st->flags->plus = 0;
	*st->flags->space = 0;
	*st->flags->zero = 0;
	*st->flags->hash = 0;
	*st->width = 0;
	*st->prec = 0;
	*st->length->h = 0;
	*st->length->l = 0;
	*st->length->j = 0;
	*st->length->z = 0;
	*st->print_count = 0;
	ft_set_types(&st);
}