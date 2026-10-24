/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:13:46 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:13:47 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*content;

	if (!l || !f || !d)
		return (NULL);
	newlst = NULL;
	while (l != NULL)
	{
		content = f(l->content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			d(content);
			ft_lstclear(&newlst, d);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		l = l->next;
	}
	return (newlst);
}
