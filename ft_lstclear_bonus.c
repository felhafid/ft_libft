/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:16:52 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/27 16:48:48 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*s;

	s = *lst;
	while (s)
	{
		p = s->next;
		del((s)->content);
		free (s);
		s = p;
	}
	*lst = NULL;
}
