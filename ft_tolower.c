/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:12:50 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/30 08:23:43 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char a)
{
	if (a >= 'A' && a <= 'Z')
		a = a + 32;
	return (a);
}
