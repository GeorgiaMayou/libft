/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:47:26 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/28 15:16:31 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		in;
	char	*ptr;

	in = 0;
	ptr = (char *)haystack;
	if (!*needle)
		return (ptr);
	while (*ptr)
	{
		while (needle[in] == *(ptr + in))
		{
			if (needle[in + 1] == '\0')
				return (ptr);
			in++;
		}
		in = 0;
		ptr++;
	}
	return (0);
}
