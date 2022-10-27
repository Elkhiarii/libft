/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:35:30 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/27 11:21:47 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*p;
	
	if (!s)
		return (0);
	if (len <= ft_strlen(s + start))
		p = (char *)(malloc(len + 1));
	else
		p = (char *)(malloc(ft_strlen(s + start) + 1));
	j = 0;
	if (!p)
		return (0);
	while (s[start] && j < len && start < ft_strlen(s))
	{
		p[j] = s[start];
		j++;
		start++;
	}
	p[j] = '\0';
	return (p);
}
