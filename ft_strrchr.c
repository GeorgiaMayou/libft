/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:28:26 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/25 16:44:03 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (ft_strlen(s));
	if (s[i] == c)
		return ((char *)s);
	while (i > 0 && s != '\0')
	{
		if (s[i--] != c)
			continue;
		if (s[i] == c)
			return ((char *)s);
		else
			return (NULL);
	}
	return (NULL);
}
