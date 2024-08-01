/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:56:55 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 17:46:37 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*a;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	a = malloc(len + 1);
	if (!a)
		return (NULL);
	i = 0;
	while (i < len && s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && (i + j) < len)
	{
		a[i + j] = s2[j];
		j++;
	}
	a[i + j] = '\0';
	return (a);
}
/*int main ()
{
	char	s1[10] = "hello";
	char	s2[10] = " world";
	printf ("%s", ft_strjoin(s1, s2));
}*/
