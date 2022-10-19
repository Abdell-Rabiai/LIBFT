/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:43:36 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 16:00:54 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_iswspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	res;

	sign = 1;
	res = 0;
	while (*str && ft_iswspace(*str))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		res *= 10;
		res += *str - '0';
		if ((res >= 9223372036854775807UL) && sign == 1)
			return (-1);
		if ((res >= 9223372036854775808UL) && sign == -1)
			return (0);
		str++;
	}
	return (res * sign);
}

// int main(void)
// {
//     char *s;
//     s = "   \t\v\r\f\n     9223372036854775807UL "; // long long max
//     printf("C_atoi = %d\n",atoi(s));
//     printf("My_atoi = %d\n",ft_atoi(s));
// }
