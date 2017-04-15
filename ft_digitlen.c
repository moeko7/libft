/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 23:09:36 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 11:03:05 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_digitlen(int *n)
{
	int				size;
	long long int	ncpy;

	size = 1;
	if (*n < 0)
	{
		size += 1;
		*n *= -1;
	}
	ncpy = *n;
	while (ncpy /= 10)
		size++;
	return (size);
}
