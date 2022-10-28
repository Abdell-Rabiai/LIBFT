/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:42:33 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/28 12:59:14 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	c;

	p = (char *)malloc(count * size);
	if (!p)
		return (0);
	c = size * count;
	while (c--)
		*(p + c) = '\0';
	return (p);
}
