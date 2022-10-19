/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:40:29 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:40:31 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
//    int ch;

//    for (ch = 0; ch <= 255; ch++) {
//       printf("ascii_decimal : %d    ", ch);
//       if (ft_isascii(ch))
//          printf("The character is %c\n", ch);
//       else
//          printf("Cannot be represented by an ASCII character\n");
//    }
//    return 0;
// }
