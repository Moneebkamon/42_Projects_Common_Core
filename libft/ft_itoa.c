/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:13:21 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:13:23 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	convert(char *str, int n, int x)
{
	unsigned int	num;

	num = (unsigned int)n;
	if (n < 0)
	{
		str[0] = '-';
		num = -(unsigned int)n;
	}
	str[x] = '\0';
	x--;
	if (n == 0)
		str[x] = '0';
	while (num > 0 && x >= 0)
	{
		str[x] = (num % 10) + '0';
		num = num / 10;
		x--;
	}
}

char	*ft_itoa(int n)
{
	int		x;
	int		num;
	char	*str;

	x = 1;
	num = n;
	if (n < 0)
		x++;
	while (num > 9 || num < -9)
	{
		num = num / 10;
		x++;
	}
	str = malloc((x + 1) * sizeof(char));
	if (!str)
		return (NULL);
	convert(str, n, x);
	return (str);
}
