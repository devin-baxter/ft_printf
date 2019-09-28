/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <debaxter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:18:45 by debaxter          #+#    #+#             */
/*   Updated: 2019/09/28 11:49:23 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if (!(ptr = (void *)malloc(sizeof(*ptr) * size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
