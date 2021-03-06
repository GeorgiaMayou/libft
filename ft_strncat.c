/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:57:42 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/30 10:59:56 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int len;

	len = ft_strlen(s1);
	while (*s2 && n > 0)
	{
		s1[len] = *s2++;
		len++;
		n--;
	}
	s1[len] = '\0';
	return (s1);
}
