/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:35:48 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:35:50 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void ft(char *c)
// {
//     *c = 'A';
// }

// int main()
// {
//     char *s = "Hello world from the other side of earth";
//     void (*f)(char*) = &ft;
//     ft_striteri(s,f);
//     puts(s);
// }
