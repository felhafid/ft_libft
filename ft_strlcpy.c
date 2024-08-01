/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:28:14 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/28 19:32:26 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;	
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
// int main ()
// {
// 	char	dst[20] = "abcd";
// 	char	src[20] = "1234";
// 	// printf("%s\n", src);
// 	// printf("%s\n", dst);
// 	printf("%zu\n", ft_strlcpy(dst, src, 3));
// 	int i = 0;
// 	while(i < 4)
// 	{
// 		printf("%c\n", dst[i]);
// 		i++;
// 	}
// }