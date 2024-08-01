/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:06:46 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/28 19:12:42 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)dst;
	b = (char *)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			a[len] = b[len];
		}
	}
	else 
		ft_memcpy(dst, src, len);
	return (dst);
}

// int main ()
// {
// 	char	src[10] = "abcdefg";
// 	char	dst[20] = "cdefg";
// 	printf("%s", ft_memmove(dst, src, 3));
// }