/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:42:50 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/28 16:54:53 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*s1;
	const char	*s2;
	int			i;

	s1 = dst;
	s2 = src;
	i = 0;
	while (n--)
	{
		s1[i] = (unsigned char)s2[i];
		if (s2[i] == c)
			return ((char *)s1 + i + 1);
		i++;
	}
	return (0);
}
