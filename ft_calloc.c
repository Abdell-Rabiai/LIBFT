/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:42:33 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/19 13:40:40 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	c;

	if (size == SIZE_MAX)
		return (NULL);
	p = (char *)malloc(count * size);
	if (!p)
		return (0);
	c = size * count;
	while (c--)
		*(p + c) = '\0';
	return (p);
}

// int main()
// {
//     char *s = (char *)ft_calloc(1,sizeof(char));
// 	//char *s = (char *)malloc(5 * sizeof(char));
//     //s[0] = 'Z'; s[1] = 'Y'; s[2] = 'W'; s[3] = 'P'; s[4] = 'B';

//     for (size_t i = 0; i < 5; i++)
//     {
//         // printf("%c\t",'X');
//         printf("%d\t",s[i]);
//     }
// }
