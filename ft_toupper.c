/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:29:37 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:29:41 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*int main() {
	char c;

	c = 'x';
	printf("%c -> %c", c, ft_toupper(c));

	c = 'y';
	printf("\n%c -> %c", c, ft_toupper(c));

	c = 'z';
	printf("\n%c -> %c", c, ft_toupper(c));
	return 0;
} */
