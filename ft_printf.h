/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <debaxter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 13:32:09 by debaxter          #+#    #+#             */
/*   Updated: 2020/01/20 16:09:30 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

# define PF_VARIABLES int ival = 0, i = 0, w = 0, prec = 0; PF_INT_CONT;
# define PF_INT_CONT int flag_count = 0, print_count = 0; PF_CHARS;
# define PF_CHARS char *p = NULL, *sval = NULL, *width = NULL; PF_CHARS CONT;
# define PF_CHARS_CONT char *precision = NULL, *len = NULL;
# define FLAG_CHK (*p == '-' || *p == '+' || *p == ' ' || *p == '0' \
		|| *p == '#')
# define LNG_CHK (*p == 'h' || *p == 'l' || *p == 'L' || *p == 'z' \
		|| *p == 'j' || *p == 't')
# define PARSE_FLAGS if (FLAG_CHK) ft_parse_flags(*p, flags);
# define HANDLE_WIDTH
# define TYPE_CHK (*p == 'd' || *p == 'i' || *p == 'u' || *p == 'f' \
		|| *p == 'F' || *p == 'e' || *p == 'E' || *p == 'g' || *p == 'G'\
		|| *p == 'x' || *p == 'X' || *p == 'o' || *p == 's' || *p == 'c'\
		|| *p == 'p' || *p == 'a' || *p == 'A' ||*p == 'n')

typedef struct	printf_flags
{
	int			minus;
	int			plus;
	int			space;
	int			zero;
	int			hash;
}				pf_flags;

typedef enum	printf_length_modifier
{
	int	h;
	int	l;
	int	j;
	int	z;
}				pf_length;

typedef enum	printf_type
{
	int			d, i, n;
	unsigned	o, u, x, X;
	double		a, A, e, E, f, F;
	char		c, *s;
	void		*p;
}				pf_type;

typedef struct	printf_struct
{
	pf_flags	flags;
	int			width;
	int			prec;
	pf_length	length;
	pf_type		type;
}				pf_struct;

#endif
