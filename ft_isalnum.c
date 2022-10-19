/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:42:13 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:42:15 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int main()
// {
//     char c;
//     int result;

//     c = '5';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'Q';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = '/';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'a';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     return 0;
// }
