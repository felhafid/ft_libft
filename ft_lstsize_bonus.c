/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:32:58 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 16:59:36 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// #include <stdio.h>

// int main ()
// {
// 	char	a[] = "hello";
// 	t_list	*s1 = ft_lstnew(a);
// 		char	a1[] = "helloo";
// 	t_list	*s2 = ft_lstnew(a1);
// 	char	a2[] = "he";
// 	t_list	*s3 = ft_lstnew(a);
// 	ft_lstadd_back(&s1, s2);
// 	ft_lstadd_back(&s1, s3);
// 	printf("%d", ft_lstsize(s1));
// }