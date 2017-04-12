/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 01:56:10 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/12 16:53:05 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(src);
	while (*dst++)
		i++;
	dst--;
	if (i >= size)
		return (size + j);
	while (*src && size--)
		*dst++ = *src++;
	*dst = '\0';
	return (i + j);
}
