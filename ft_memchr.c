/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:10:36 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/28 19:22:52 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	int	o[4] = {7, 0, 1, 0};
// 	int *s = ft_memchr(o, 0, 3);
// 	int i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n",s[i]);
// 		i++;
// 	}
// }
// int main ()
// {
// 	char	*o = "hello";
// 	char *s = ft_memchr(o, 'e', 5);
// 	int i = 0;
// 	while (i < 4)
// 	{
// 		printf("%c\n",s[i]);
// 		i++;
// 	}
// }