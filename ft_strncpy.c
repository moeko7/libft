/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 00:17:08 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/12 00:51:23 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while  (len > 0)
	{	
		while (src[i])
		{
			dst[i] = src[i];
			i++;
			len--;
		}
		dst[i] = '\0';
		i++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}
