/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:42:45 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 15:19:51 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int convert(const char *s, int i, int sign)
{
	int	result;

	result = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		result = result * 10 + (s[i] - 48);
		i++;
	}
	return (sign * result);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		i++;
	}

	return (convert(s, i, sign));
}
