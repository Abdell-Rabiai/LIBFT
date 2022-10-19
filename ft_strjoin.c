/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:14:33 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 12:25:17 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	strjoin = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strjoin)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		strjoin[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}

// int main()
// {
//     char *s1 = "Hello world from th";
//     char *s2 = "e other side of earth";
//     char *strjoin = ft_strjoin(s1,s2);
//     puts(strjoin);
// }
