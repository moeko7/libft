/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 21:20:06 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 03:13:35 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(fresh = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (*s2)
	{
		while (*s1)
			*fresh++ = *s1++;
		*fresh++ = *s2++;
	}
	*fresh = '\0';
	fresh -= len;
	return (fresh);
}
