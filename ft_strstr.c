/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:55:02 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/12 19:50:26 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack,const char *needle)
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
	while (src[i])
	{		
		pos = i;
		while (src[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (&src[pos]);
		}
		j = 0;
		i++;
	}
	return (0);
}
