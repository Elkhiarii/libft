/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:21:58 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/11/08 11:33:26 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	i = 0;
	while (x[i] && y[i] && x[i] == y[i] && i < n - 1)
		i++;
	return (x[i] - y[i]);
}
