/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:31 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:38:51 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
//     int fd = open("foo.txt", O_CREAT | O_RDWR | O_EXCL);
//     printf("%d\n",fd);
//     ft_putchar_fd('X',fd);
// }
