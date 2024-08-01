/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:43:07 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/28 20:09:48 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	somme;

	i = 0;
	sign = 1;
	somme = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i + 1] == 43 || str[i + 1] == 45)
			return (0);
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		somme = somme * 10 + (str[i] - 48);
		i++;
	}
	return (sign * somme);
}
// int main ()
// {
// 	printf("%d", ft_atoi("-125"));
// }