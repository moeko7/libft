/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 08:32:53 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 08:39:15 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, const int c, size_t size)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)dst;
	while (size--)
		if ((*dest++ = ((const unsigned char *)src)[i++]) == (unsigned char)c)
			return (dest);
	return (NULL);
}
