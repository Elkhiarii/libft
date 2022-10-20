/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:35:30 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/20 18:34:40 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lens;
	char	*str;
	int		i;

	lens = ft_strlen(s);
	str = (char *)malloc(len + 1);
	i = 0;
	if (!s || !str || start >= lens)
		return (0);
	while (((start + i) != lens) && (i != len))
	{
		str[i] = s[start + i];
		i++;
	}
	str[start] = '\0';
	return (str);
}
