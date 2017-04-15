/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 21:14:38 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 04:32:39 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *fresh;

	if (!(fresh = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	start += len;
	while (len--)
		fresh[len] = s[start--];
	fresh[len] = 0;
	return (fresh);
}
