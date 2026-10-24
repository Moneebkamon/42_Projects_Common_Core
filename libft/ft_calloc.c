/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:12:33 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:12:36 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t len)
{
	void	*ptr;

	if (nmemb != 0 && len > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(nmemb * len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * len);
	return (ptr);
}
