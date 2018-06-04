/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:07:38 by jburger           #+#    #+#             */
/*   Updated: 2018/06/04 14:07:41 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	if (s)
	{
		i = 0;
		j = ft_strlen((char *)s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		if (s[i] == '\0')
			return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
		tmp = (char *)malloc(sizeof(char) * (j - i + 2));
		if (!(tmp))
			return (NULL);
		k = 0;
		while (i <= j)
			tmp[k++] = s[i++];
		tmp[k] = '\0';
		return (tmp);
	}
	return (NULL);
}
