/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:30:45 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 12:59:56 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (ldest >= dstsize)
		return (dstsize + lsrc);
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && j + i < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ldest + lsrc);
}
// #include <stdio.h>

// int main ()
// {
// 		printf("%zu", ft_strlcat("hello", "hey", 10));
// }
