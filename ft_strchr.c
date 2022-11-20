/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:05:22 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/11/20 13:26:12 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char *str, int c )
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str [i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == 0)
		return ((char *)&str[i]);
	return (0);
}
