/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:49:44 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 17:24:52 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	len;
	char	*dst;

	len = ft_strlen(s1);
	dst = (char *)malloc(len + 1);
	while (len >= 0)
	{
		dst[len--] = s1[len];
	}
	return (dst);
}
// int main()
// {
//     printf("%s",ft_strdup("fdhxfdtx")); => fdhxfdtx
// }