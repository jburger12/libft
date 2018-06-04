/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:11:33 by jburger           #+#    #+#             */
/*   Updated: 2018/05/28 18:11:36 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	i = (unsigned char)c;
	while (n > 0)
	{
		*s2 = *s1;
		if (*s1 == i)
			return ((unsigned char *)s2 + 1);
		else
		{
			s1++;
			s2++;
			n--;
		}
	}
	return (NULL);
}
