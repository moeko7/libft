/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 23:09:36 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/13 23:09:50 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitlen(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size += 1;
		n = -n;
	}
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size += 1);
}
