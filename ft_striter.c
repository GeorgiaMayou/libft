/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:57:40 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/28 17:42:34 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	int		i;
	char	*ptr;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	ptr = ft_strnew(size);
	while (s)
	{
		ptr[i] = (char *)f(&s[i]);
		i++;
	}
}
