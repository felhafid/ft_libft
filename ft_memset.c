/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:58:02 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 12:42:24 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (len > 0)
	{
		a[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}
// int main ()
// {
// 	int tab[] = {1, 2, 3};
// 	int i = 0;
// 	ft_memset(tab, 97, 7);
// 	while (i < 3)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// }
// int main ()
// {
// 	char	s[] = "hello";
// 	printf("%s", ft_memset(s, 97, 3));
// }