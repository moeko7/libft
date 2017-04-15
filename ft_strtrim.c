/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 21:30:30 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 03:17:07 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	start;

	start = 0;
	while (s[start] == WSPACE)
		start++;
	len = ft_strlen(s);
	while (s[len] == WSPACE)
		len--;
	len -= start;
	return (ft_strsub(s, start, len));
}
