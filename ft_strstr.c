/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:47:26 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/25 16:45:39 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		ih;
	int		in;
	char	*ans;
	int		i;

	i = 0;
	ih = 0;
	in = 0;
	ans = (char *)haystack;
	if (needle == NULL)
		return (ans);
	while (needle)
	{
		if (haystack[ih] == needle[in])
			in++;
		else
			ih++;
	}
	if (needle[in - 1] == haystack[ih])
	{
		ans[i] = haystack[ih - (ft_strlen(needle))];
		return (ans);
	}
	return (NULL);
}
