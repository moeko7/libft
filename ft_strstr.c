/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:55:02 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 09:45:48 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	size_t	i;
	size_t	j;
	size_t	pos;
	char	*src;

	src = (char *)str;
	i = 0;
	j = 0;
	if (ft_strlen(find) == 0)
		return ((char *)str);
	while (src[i])
	{
		pos = i;
		while (src[pos++] == find[j++])
		{
			if (find[j] == '\0')
				return ((char *)&src[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
