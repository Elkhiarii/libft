/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:58:08 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/24 14:18:59 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

static char	**free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return (0);
}

static size_t	ft_len(char *s, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (!s[i + 1] || (s[i + 1] != c && s[i] == c))
			len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	fw;
	char	**split;

	if (!s || !c)
		return (0);
	split = malloc(sizeof(char *) * (ft_len(s, c) + 1));
	if (!split)
		return (0);
	while (i < ft_len(s, c) && s[j])
	{
		while (s[j] == c)
			j++;
		fw = j;
		while (s[j] != c && s[j])
			j++;
		split[i] = ft_substr(&s[j], 0, j - fw);
		if (split[i++] == 0)
			return (free_split(split));
	}
	split[i] = 0;
	return (split);
}
