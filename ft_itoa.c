/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:28:59 by felhafid          #+#    #+#             */
/*   Updated: 2024/05/25 19:04:47 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numberlen(long n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (i);
	if (n > 0)
		i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	int	ft_checkneg(long *nbr)
{
	int	neg;

	neg = 1;
	if (*nbr < 0)
	{
		neg = -1;
		*nbr = *nbr * -1;
	}
	return (neg);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		len;
	long	nb;
	int		sign;

	nb = n;
	len = ft_numberlen(nb);
	sign = ft_checkneg(&nb);
	a = malloc(len + 1);
	if (!a)
		return (NULL);
	while (len > 0)
	{
		a[len - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	a[ft_numberlen(n)] = '\0';
	if (sign == -1)
		a[0] = '-';
	return (a);
}
// int main ()
// {
// 	printf("%s", ft_itoa(21));
// }
