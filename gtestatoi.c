/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:30:37 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/24 12:36:56 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int ans;
	int sign;

	sign = 1;
	ans = 0;
	while (*str)
	{	
		while (ft_isspace(*str) || *str == '+')
			str++;
		if  ((*str == '+' || *str == '-') && (ft_isdigit(*(str + 1))))
			if (*str == '-' && (sign = -1))
				str++;
		if (ft_isdigit(*str)== 1)
		{
			ans  = *str - '0';
			str++;
			while (ft_isdigit(*str) == 1)
			{
					ans = (ans * 10) + (*str - '0');
					str++;
			}
		}
		return (ans * sign);
	}
	return (0);
}
