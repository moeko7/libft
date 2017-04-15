/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:50:53 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 09:46:56 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	pos;
	size_t	len;

	i = 0;
	if (!*find)
		return ((char *)str);
	len = ft_strlen(find);
	while (str[i] && size-- >= len)
	{
		j = 0;
		pos = i;
		while (str[pos++] == find[j++])
			if (!find[j])
				return (&((char *)str)[i]);
		i++;
	}
	return (0);
}
