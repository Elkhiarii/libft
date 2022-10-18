/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:03:46 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 21:25:04 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i != len)
	{
		if ((ft_strncmp((char *)&s1[i], s2, ft_strlen(s2)) == 0))
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}

