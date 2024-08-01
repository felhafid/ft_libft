/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:56:23 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/26 13:13:42 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	n;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || !len)
		return (ft_strdup(""));
	n = ft_strlen(s) - start;
	if (len > n)
		len = n;
	a = malloc(len + 1);
	if (!a)
		return (NULL);
	while (i < len)
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
/*int main ()
{
	char d[15] = "hello world";
	int i = 0;
	char *r = ft_substr(d, 2, 12);
	while (i < 12)
	{
		printf("%c\n", r[i]);
		i++;
	}
}*/