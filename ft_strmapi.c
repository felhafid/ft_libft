/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:01:17 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/29 18:09:33 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[len])
		len++;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char	f(unsigned i, char c)
// {
//  c = c + i;
// 	return (c);
// }
// int main ()
// {
// 	printf("%s", ft_strmapi("ABCD", f));
// }