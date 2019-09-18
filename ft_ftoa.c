/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:54:33 by debaxter          #+#    #+#             */
/*   Updated: 2019/09/18 14:43:08 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		power(int x, unsigned int y)
{
	int		temp;

	if (y == 0)
		return (1);
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return (temp * temp);
	else
		return (x * temp * temp);
}

void	rev_str(char *str, int len)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int		int_to_str(long x, char str[], int d)
{
	int		i;

	i = 0;
	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}
	while (i < d)
		str[i++] = '0';
	rev_str(str, i);
	str[i] = '\0';
	return (i);
}

void	ft_ftoa(double n, char *res, int afterpnt)
{
	long	ipart;
	float	fpart;
	int		i;

	ipart = (long)n;
	fpart = n - (float)ipart;
	i = int_to_str(ipart, res, 0);
	if (afterpnt != 0)
	{
		res[i] = '.';
		fpart = fpart * power(10, afterpnt);
		int_to_str((int)fpart, res + i + 1, afterpnt);
	}
	return ;
}

int		main(void)
{
	char	res[30];
	double	n;

	n = 233.007;
	ft_ftoa(n, res, 8);
	printf("%s\n", res);
	return (0);
}
