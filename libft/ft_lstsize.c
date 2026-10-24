/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:54:36 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/15 14:42:44 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	x;
	t_list			*temp;

	if (!lst)
		return (0);
	x = 1;
	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
		x++;
	}
	return (x);
}
