/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:36:07 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 16:02:29 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = (char *)malloc(ft_strlen((char *)src) * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	while (i < ft_strlen((char *)src))
	{
		copy[i] = (char)src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int    main(void)
// {
//     char    *s;
//     char    *cp;

//     s = "Hello World";
//     cp = ft_strdup(s);
//     puts(s);
//     printf("%s\n", cp);
//     return (0);
// }
