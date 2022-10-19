/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:04:17 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 19:04:38 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

// int main()
// {
//     char *a="Program helloe */- 0345 \t \t ";

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %zu \n",ft_strlen(a));
//     printf("Length of string b using LIBC function = %zu \n",strlen(a));

//     return 0;
// }
