/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:30:10 by jburger           #+#    #+#             */
/*   Updated: 2018/05/25 13:43:21 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			icount;
	unsigned char	*src;
	unsigned char	chr;

	icount = 0;
	src = (unsigned char*)s;
	chr = (unsigned char)c;
	while (icount < n)
	{
		if (src[icount] == chr)
		{
			return (&src[icount]);
		}
		icount++;
	}
	return (NULL);
}
