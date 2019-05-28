/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:16:21 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/25 16:29:50 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *s1;
	char *s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	while (n-- > 0)
		*s1++ = *s2++;
	return (s1);
}
