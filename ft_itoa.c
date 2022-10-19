/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:48:08 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:48:10 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_length_number(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= (-1);
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			length;
	char		*numbers;

	nbr = n;
	length = ft_get_length_number(n);
	numbers = (char *)malloc(sizeof(char) * length + 1);
	if (!numbers)
		return (NULL);
	if (n == 0)
		numbers[0] = '0';
	numbers[length] = '\0';
	if (nbr < 0)
	{
		numbers[0] = '-';
		nbr = nbr * (-1);
	}
	length--;
	while (nbr)
	{
		numbers[length] = (nbr % 10) + '0';
		nbr = nbr / 10;
		length --;
	}
	return (numbers);
}
