/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 09:24:46 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/16 10:01:26 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[j++])
		if (s[j] == c && s[j + 1] != c)
			i++;
	if (s[0] != '\0')
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * count_words(s, c) + 1)))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!(tab[i] = ft_strsub((char *)s, 0, (ft_strrlen(s, c)))))
				return (ft_cleaner(tab, i));
			i++;
		}
		while (*s != c && *s)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
