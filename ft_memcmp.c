/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:39:30 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 14:45:41 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (!p2 && !p1)
		return (0);
	while (i < n)
	{
		if (*(p1 + i) != *(p2 + i))
			return (*(p1 + i) - *(p2 + i));
		else
			i++;
	}
	return (0);
}

// int main()
// {
//     char *s1 = "Hello\0aworld";
// 	char *s2 = "Hello\0\0world";
//     printf(">>>memcmp %d\n",(memcmp(s1,s2,12)));
//     printf("ft_memcmp %d\n",(ft_memcmp(s1,s2,12)));
// }
