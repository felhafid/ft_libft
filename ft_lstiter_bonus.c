/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:17:58 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 17:28:51 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void	f(void *c)
// {
// 	free(c);
// }
// int main()
// {
// 	t_list	*s = ft_lstnew("hey");
// 	t_list	*s1 = ft_lstnew("joo");
// 	ft_lstadd_back(&s, s1);
// 	ft_lstiter(s, f);
// 	printf ("%s", s->content);
// }