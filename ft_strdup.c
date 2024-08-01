/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:55:30 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 10:24:48 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(s1);
	a = (char *) malloc(n + 1);
	if (a == NULL)
		return (NULL);
	while (i < n)
	{
		a[i] = s1[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *s1 = "hello";
// 	printf("%s",strdup(s1));
// }
