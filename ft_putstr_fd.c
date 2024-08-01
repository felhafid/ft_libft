/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:42:56 by felhafid          #+#    #+#             */
/*   Updated: 2023/12/30 17:03:22 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fcntl.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main ()
// {
// 	int fd;
// 	int fd1;
// 	int fd3;
// 	fd = open("test1.txt", O_CREAT | O_RDWR , 0777);
// 	ft_putstr_fd("hey", fd);
// 	printf("%d\n", fd);
// 	fd1 = open("test2.txt", O_CREAT | O_RDWR , 0777);
// 	printf("%d\n", fd1);
// 	close(fd);
// 	fd3 = open("test3.txt", O_CREAT | O_RDWR , 0777);
// 	printf("%d\n", fd3);
// }