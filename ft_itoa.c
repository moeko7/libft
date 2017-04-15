/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 23:08:41 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 04:01:42 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	getsize(int *n)
{
	unsigned int	si;
	long long int	n2;

	si = 1;
	if (*n < 0)
	{
		si++;
		*n *= -1;
	}
	n2 = *n;
	while (n2 /= 10)
		si++;
	return (si);
}

char				*ft_itoa(int n)
{
	unsigned int	si;
	char			*s;
	short			sign;

	sign = n < 0 ? -1 : 0;
	si = getsize(&n);
	if (!(s = (char *)malloc(sizeof(char) * (si + 1))))
		return (NULL);
	s[si] = 0;
	while (si--)
	{
		s[si] = n % 10 + 48;
		n /= 10;
	}
	if (sign)
		*s = 45;
	return (s);
}
