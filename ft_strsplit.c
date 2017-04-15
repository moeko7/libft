/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 09:24:46 by apieczyr          #+#    #+#             */
/*   Updated: 2017/04/15 11:01:24 by apieczyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	size_t	word;
	size_t	boo;

	word = 0;
	while (*s)
	{
		boo = 0;
		while (*s && *s == c)
			s++;
		while (*s++ && *s != c)
			boo = 1;
		if (boo == 1)
			word++;
	}
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * count_words(s, c))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!(tab[i++] = ft_strsub((char *)s, 0, (ft_strrlen(s, c)))))
				return (ft_cleaner(tab, i));
		}
		while (*s != c && *s)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
