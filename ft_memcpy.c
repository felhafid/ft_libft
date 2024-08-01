/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:58:26 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 10:14:52 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *)dst;
	b = (char *)src;
	i = 0;
	if (!a && !b)
		return (0);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
// #include <string.h>

// int main ()
// {
// 	char	d[] = "helo";
// 	char	s[] = "hyyyy";
// 	int i = 0;
// 	char *p = ft_memcpy(d, s, 1);
// 	while (i < 4)
// 	 {
// 	    printf("%c\n", p[i]);
// 		i++;
// 	}
// }
// int main ()
// {
// 	char	s[] = "hello";
// 	char	r[] = "hey";
// 	printf ("%s", ft_memcpy(s, r, 3));
// }