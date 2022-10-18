/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:02:03 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 17:17:20 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st;
	unsigned char	*sy;
	size_t	i;

	st = (unsigned char *)s1;
	sy = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(st + i) != *(sy + i))
			return (*(st + i) - *(sy + i));
		i++;
	}
	return (0);
}
// int main()
// {
//     const void *s1;
//     const void *s2;
//     s1 = "Othmane";
//     s2 = "OthmaNe";
//     int x;
//     x = ft_memcmp(s1,s2,7);
//     printf("%d",x);
// }