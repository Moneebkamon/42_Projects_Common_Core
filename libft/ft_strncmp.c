/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:15:19 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:15:20 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n && (s1[x] != '\0' && s2[x] != '\0') && s1[x] == s2[x])
		x++;
	if (x == n)
		return (0);
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
