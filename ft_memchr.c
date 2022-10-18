/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:13:49 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 17:14:32 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ft_c;
	int	i;

	str = (unsigned char *)s;
	ft_c = c;
	i = 0;
	while (i < n)
	{
		if (*(str + i) == ft_c)
			return ((unsigned char *)&str[i]);
	}
	return (0);
}
