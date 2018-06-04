/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:33:16 by jburger           #+#    #+#             */
/*   Updated: 2018/05/30 14:28:07 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	haystack;
	size_t	needle;
	size_t	i;

	needle = 0;
	while (src[needle] != '\0')
		needle++;
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	haystack = i;
	if ((dstsize + i) == 0)
		return (i + needle);
	while (src[i - haystack] && i < dstsize - 1)
	{
		dst[i] = src[i - haystack];
		i++;
	}
	if (haystack < dstsize)
		dst[i] = '\0';
	return (haystack + needle);
}
