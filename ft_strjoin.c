/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:52:49 by jburger           #+#    #+#             */
/*   Updated: 2018/06/04 12:58:26 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;

	if ((s1) && (s2))
	{
		nstr = (char *)malloc(sizeof(char)
				* (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (nstr == NULL)
			return (NULL);
		ft_strclr(nstr);
		ft_strcat(nstr, s1);
		ft_strcat(nstr, s2);
		return (nstr);
	}
	else
		return (NULL);
}
