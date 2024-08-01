/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:34:55 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 10:17:24 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//  #include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main ()
// {
// 	int fd = open("test.txt", O_CREAT | O_RDWR, 0777);
// 	ft_putchar_fd('x', fd);
// 	printf ("%d", fd);
// 	close (fd);
// }