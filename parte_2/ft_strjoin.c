/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:19:20 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/20 18:38:02 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lens1;
	size_t	len;
	int		i;

	i = 0;
	lens1 = ft_strlen(s1);
	len = lens1 + ft_strlen(s2);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[lens1 + i] = s2[i];
		i++;
	}
	str[lens1 + i] = '\0';
	return (str);
}
