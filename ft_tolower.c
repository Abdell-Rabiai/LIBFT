/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:30:10 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:30:13 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

// int main()
// {
//     char c, result;

//     c = 'x';
//     result = ft_tolower(c);
//     printf("tolower(%c) = %c\n", c, result);

//     c = 'Y';
//     result = ft_tolower(c);
//     printf("tolower(%c) = %c\n", c, result);

//     c = 'Z';
//     result = ft_tolower(c);
//     printf("tolower(%c) = %c\n", c, result);

//     return 0;
// }
