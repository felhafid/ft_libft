/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:26:02 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 17:02:23 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>

// int main ()
// {
// 	char	a[] = "hello";
// 	t_list	*s1 = ft_lstnew(a);
// 	char	a1[] = "helloo";
// 	t_list	*s2 = ft_lstnew(a1);
// 	char	a2[] = "he";
// 	t_list	*s3 = ft_lstnew(a2);
// 	ft_lstadd_back(&s1, s2);
// 	ft_lstadd_back(&s1, s3);
// 	printf("%s", ft_lstlast(s1) -> content);
// }