/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:04:25 by debaxter          #+#    #+#             */
/*   Updated: 2020/03/11 01:22:47 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct		s_errors
{
	unsigned	fl;
	unsigned	wi;
	unsigned	per;
	unsigned	pre;
	unsigned	le;
	unsigned	ty;
}			t_errors;

typedef	struct		s_flags
{
	unsigned	minus;
	unsigned	plus;
	unsigned	space;
	unsigned	zero;
	unsigned	hash;
}			t_flags;

typedef	struct		s_length
{
	unsigned	h;
	unsigned	l;
	unsigned	j;
	unsigned	z;
}			t_length;

typedef	struct		s_type
{
	int		d, i, n;
	unsigned	o, u, x, X;
	double		a, A, e, E, f, F;
	char		ch, *str;
	void		*ptr;
}			t_type;

typedef	struct		s_printf_struct
{
	t_errors	errors;
	t_flags		flags;
	unsigned	width;
	unsigned	prec;
	t_length	length;
	t_type		types;
	unsigned    print_count;
	size_t		fmt_len;
	unsigned	plh;
	unsigned	c;
	unsigned	i;
	char		*output;
}			t_pfstruct;