/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:50:53 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/12 20:08:00 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack,const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t 	pos;
	char 	*src;

	src = (void *)haystack;
	i = 0;
	j = 0;
	if (!*needle)
		return ((void *)haystack);
	while (src[i] && len)
	{		
		pos = i;
		while (src[i] == needle[j] && len)
		{
			i++;
			j++;
			len--;
			if (needle[j] == '\0')
				return (&src[pos]);
		}
		j = 0;
		i++;
		len--;
	}
	return (0);
}
