/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:05:22 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 17:23:49 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

char	*ft_strchr(const char *str, int c)
{
	char	ft_c;
	int	i;

	ft_c = (const char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == ft_c)
			return ((char *)&str[i]);
		i++;
	}
}
