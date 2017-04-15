/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 08:41:40 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 08:43:27 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;

	size = ft_strlen(s) + 1;
	while (size--)
		if (s[size] == (char)c)
			return (&(((char *)s)[size]));
	return (NULL);
}
