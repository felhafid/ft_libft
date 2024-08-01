/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:06:05 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 12:03:58 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void f(unsigned int i, char *c) 
// {
//     printf("old :%c\n", *c);
// 	*c = *c + i;
// 	printf("new : %c\n", *c);
// }
// int main(void) 
// {
//     char my_string[] = "1234";
//     ft_striteri(my_string, f);
// }