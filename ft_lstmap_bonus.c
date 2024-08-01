/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:30:11 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 17:17:17 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*nextnode;
	void	*fcontnt;

	if (!lst || !f || !del)
		return (0);
	newlst = 0;
	while (lst)
	{
		fcontnt = f(lst->content);
		nextnode = ft_lstnew(fcontnt);
		if (!nextnode)
		{
			del(fcontnt);
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, nextnode);
		lst = lst->next;
	}
	return (newlst);
}
// void    del(void *c)
// {
//     free (c);
// }
// void    *f(void *a)
// {
//     char    *s = a;
//     s[0] = '#';
//     return (s);
// }
// int main ()
// {
// 	char	a[] = "the";
//     t_list    *s = ft_lstnew(a);
// 	char	b[] = "goat";
//     t_list    *s1 = ft_lstnew(b);
// 	char	c[] = "is here";
//     t_list    *s2 = ft_lstnew(c);
//     ft_lstadd_back(&s, s1);
//     ft_lstadd_back(&s, s2);
//     t_list    *nlst = ft_lstmap(s, f, del);
//     while (nlst)
//     {
//         printf("%s\n",nlst->content);
//         nlst = nlst->next;
//     }
// }
