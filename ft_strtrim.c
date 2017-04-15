/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 21:30:30 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 11:03:33 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wspace(const int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trim;

	if (!s)
		return (NULL);
	end = ft_strlen(s);
	start = 0;
	while (wspace(s[start]))
		start++;
	if (!s[start])
	{
		trim = ft_strnew(0);
		return (trim);
	}
	while (wspace(s[end - 1]))
		end--;
	len = end - start;
	trim = ft_strsub(s, start, len);
	return (trim);
}
