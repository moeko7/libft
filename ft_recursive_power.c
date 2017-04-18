/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 19:06:59 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/18 19:10:38 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 1 || power == 0 || nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
