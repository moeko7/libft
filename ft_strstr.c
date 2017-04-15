/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:55:02 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 03:52:36 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	pos;
	char	*src;

	src = (char *)haystack;
	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (src[i])
	{
		pos = i;
		while (src[pos++] == needle[j++])
		{
			if (needle[j] == '\0')
				return ((char *)&src[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
