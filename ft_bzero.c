/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:51:03 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 12:41:16 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main ()
{
	char	o[20] = "intiger";
	ft_bzero(o, 2);
	int i = 0;
	while (i < 6)
	{
		printf("%c\n",o[i]);
		i++;
	}
}*/
/*int main ()
{
	int	o[5] = {1, 4, 8, 3, 5};
	ft_bzero(o, 2);
	int i = 0;
	while (i < 2)
	{
		printf("%d\n",o[i]);
		i++;
	}
}*/