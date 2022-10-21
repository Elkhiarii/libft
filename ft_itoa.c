/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:51:50 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/21 10:31:40 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long long	a;

	len = ft_numlen(n);
	str = malloc(len + 1);
	a = n;
	if (!str)
		return (0);
	if (a < 0)
	{
		str[0] = '-';
		a *= -1;
	}
	if (a == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (a)
	{
		str[len--] = ((a % 10) + 48);
		a /= 10;
	}
	return (str);
}
