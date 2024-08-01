/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:31:28 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 16:54:43 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main ()
// {
// 	t_list	*s = ft_lstnew("hey");
// 	t_list	*s1 = ft_lstnew("hello");
// 	ft_lstadd_front(&s, s1);
// 	printf("%s", s->next->content);
// }