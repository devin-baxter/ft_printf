/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 13:32:09 by debaxter          #+#    #+#             */
/*   Updated: 2020/01/13 18:23:35 by debaxter         ###   ########.fr       */
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
	int	minus = 0;
	int	plus = 0;
	int	space = 0;
	int	zero = 0;
	int	hash = 0;
}				pf_flags;

typedef struct	printf_length_modifier
{
	int	h = 0;
	int	l = 0;
	int	j = 0;
	int	z = 0;
}				pf_lengmod;

#endif
