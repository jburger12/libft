/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:33:47 by jburger           #+#    #+#             */
/*   Updated: 2018/05/25 13:43:47 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			icount;
	unsigned char	*str1;
	unsigned char	*str2;

	icount = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (icount < n)
	{
		if (str1[icount] == str2[icount])
			icount++;
		else
			return (str1[icount] - str2[icount]);
	}
	return (0);
}
