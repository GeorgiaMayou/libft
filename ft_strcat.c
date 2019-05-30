/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:26:55 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/30 10:56:41 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int len;

	len = ft_strlen(s1);
	while (*s2)
	{
		s1[len] = *s2++;
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
