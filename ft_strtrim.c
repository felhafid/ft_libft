/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:55:54 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 10:26:55 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkcaracter(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	j;
	size_t	i;
	int		z;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)s1);
	while (i < j && ft_checkcaracter(set, s1[i]) == 1)
		i++;
	while (i < j && ft_checkcaracter(set, s1[j - 1]) == 1)
		j--;
	a = (char *)malloc(j - i + 1);
	if (!a)
		return (NULL);
	z = 0;
	while (i < j)
	{
		a[z++] = s1[i++];
	}
	a[z] = '\0';
	return (a);
}
// int main ()
// {
// 	char *p = NULL;
// 	printf("%s\n", ft_strtrim("aaaaaaaaaa", p));
// }
