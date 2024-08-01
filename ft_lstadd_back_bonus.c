/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:44:58 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/27 14:26:21 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	a = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (a->next != NULL)
	{
		a = a->next;
	}
	a->next = new;
}
// int main ()
// {
// 	t_list	*s = ft_lstnew("hey");
// 	t_list	*s1 = ft_lstnew("hello");
// 	ft_lstadd_back(&s, s1);
// 	printf("%s", s->next->content);
// }