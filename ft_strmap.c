/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 02:29:05 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 09:39:23 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	len;

	if (!s || !(f))
		return (NULL);
	len = ft_strlen(s);
	if (!(fresh = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (*s)
		*fresh++ = f((char)*s++);
	*fresh = 0;
	fresh -= len;
	return (fresh);
}
