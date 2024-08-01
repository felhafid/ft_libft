/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:16:43 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 17:14:47 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
// void	del(void *c)
// {
// 	free(c);
// }
// int main ()
// {
// 	t_list	*i = ft_lstnew("hello");
// 	printf("%s", i->content);
// 	ft_lstdelone(i, del);
// 	printf("%s", i->content);
// }