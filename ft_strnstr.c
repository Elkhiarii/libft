/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:03:46 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/28 15:08:40 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_s2;
	len_s2 = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	if (!len)
		return 0;
	while (*s1 && len-- >= len_s2)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len_s2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
