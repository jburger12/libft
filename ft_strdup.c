/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:01:58 by jburger           #+#    #+#             */
/*   Updated: 2018/05/28 15:22:48 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	if (!(str2 = (char *)malloc((sizeof(char) * len) + 1)))
		return (NULL);
	if (str2)
	{
		while (str[i] != '\0')
		{
			str2[i] = str[i];
			i++;
		}
	}
	str2[i] = '\0';
	return (str2);
}
