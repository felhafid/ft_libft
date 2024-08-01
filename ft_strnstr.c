/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:28:54 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 13:03:46 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	a;
	size_t	i;
	size_t	j;

	i = 0;
	while (to_find[i])
		i++;
	if (i == 0)
		return ((char *)str);
	j = 0;
	while (str[j] && j < len)
	{
		a = 0;
		while ((str[a + j] == to_find[a]) && a + j < len)
		{
			a++;
			if (i == a)
				return ((char *)&str[j]);
		}
		j++;
	}
	return (0);
}
// int main ()
// {
// 	printf("%s", ft_strnstr("hello", "ll", 4));
// }