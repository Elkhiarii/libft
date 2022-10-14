/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:33:13 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/09 18:36:29 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(char c)
{
	if (c >= 32 && c<= 126)
		return 1;
	return 0;
}
