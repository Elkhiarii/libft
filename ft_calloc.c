/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:31:34 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/28 14:23:04 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (0);
	i = malloc(count * size);
	if (!i)
		return (0);
	ft_bzero(i, count * size);
	return (i);
}
