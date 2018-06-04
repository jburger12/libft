/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 18:41:12 by jburger           #+#    #+#             */
/*   Updated: 2018/05/28 15:30:21 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		icount;

	icount = 0;
	if (src < dst)
	{
		icount = len;
		while (icount > 0)
		{
			icount--;
			((char*)dst)[icount] = ((char*)src)[icount];
		}
	}
	else
	{
		while (icount < len)
		{
			((char*)dst)[icount] = ((char*)src)[icount];
			icount++;
		}
	}
	return (dst);
}
