/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:35:37 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/23 10:02:56 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32;
		return (a);
	}
	else
		return (a);
}