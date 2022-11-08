/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:48:21 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/11/08 12:05:46 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	serchw(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	beginw(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!serchw(set, s1[i]))
			return (i);
		i++;
	}
	return (-1);
}

static int	endw(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (--len)
	{
		if (!serchw(set, s1[len]))
			return (len);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return ((char *)s1);
	i = beginw(s1, set);
	j = endw(s1, set);
	if (i < 0)
		return (ft_strdup(""));
	return (ft_substr(s1 + i, 0, (j - i + 1)));
}
