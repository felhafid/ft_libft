/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:35:04 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/24 15:47:36 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
/*include <stdio.h>
int main()
{
	char s1[20] = "hello";
	char s2[20] = "hey";
	int tab[3] = {1, 2, 3};
	int tab1[3] = {1, 3, 3}; 

	printf("%d",ft_memcmp(tab, tab1, 12));
}*/
