/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:51:29 by jburger           #+#    #+#             */
/*   Updated: 2018/06/01 12:16:19 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*nstr;

	if (!f || !s)
		return (NULL);
	i = 0;
	nstr = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (nstr)
	{
		while (s[i])
		{
			nstr[i] = f((char)s[i]);
			i++;
		}
		nstr[i] = '\0';
	}
	return (nstr);
}
