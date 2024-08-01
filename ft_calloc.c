/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:59:17 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 10:07:41 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*a;

	i = 0;
	a = malloc(count * size);
	if (!a)
		return (0);
	while (i < (count * size))
	{
		*(unsigned char *)(a + i) = 0;
		i++;
	}
	return (a);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = ft_calloc(4, 1);
// 	int	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", str[i]);
// 		i++;
// 	}
// }