/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:12 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/21 09:58:40 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	m_len;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		m_len = ft_strlen(s) - start;
	else if (start > ft_strlen(s))
		m_len = 0;
	else
		m_len = len;
	substring = malloc(sizeof(char) * (m_len + 1));
	if (!substring)
		return (NULL);
	while (i < m_len && start <= ft_strlen(s))
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
