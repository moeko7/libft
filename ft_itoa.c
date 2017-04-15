/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 23:08:41 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 09:54:34 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
	unsigned int    size;
	char            *s;
	short           sign;

	sign = n < 0 ? -1 : 0;
	size = ft_digitlen(&n);
	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	s[size] = 0;
	while (size--)
	{
		s[size] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		*s = '-';
	return (s);
}
