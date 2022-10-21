/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:13:49 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 21:31:44 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ft_c;
	size_t			i;

	str = (unsigned char *)s;
	ft_c = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ft_c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	return (0);
}
