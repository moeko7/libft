/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:50:53 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 04:08:01 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
	while (src[i] && len-- > ft_strlen(needle))
	{
		pos = i;
		while (src[pos++] == needle[j++] && len--)
			if (needle[j] == '\0')
				return (&src[i]);
		j = 0;
		i++;
	}
	return (0);
}
