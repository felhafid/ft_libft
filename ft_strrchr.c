/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:19:36 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 13:01:32 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if ((char)s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
// int main ()
// {
// 	printf ("%s", ft_strrchr("hello", 'l'));
// }