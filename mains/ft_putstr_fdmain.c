/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdmain.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:38:06 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/23 14:38:51 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putstr_fd("Hello there!\n", 1);
	ft_putstr_fd("My name is Georgia.", 1);
	return(0);
}
