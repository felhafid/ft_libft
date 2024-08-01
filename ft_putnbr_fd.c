/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:58:51 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 17:02:26 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb < 10)
	{
		ft_putchar_fd((nb + 48), fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
// int main ()
// {
// 	int fd;
// 	fd = open("test.txt", O_CREAT | O_RDWR, 0777);
// 	ft_putnbr_fd(788, fd);
// 	close(fd);
// }