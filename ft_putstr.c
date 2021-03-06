/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:33 by yslati            #+#    #+#             */
/*   Updated: 2019/11/05 13:21:43 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			ft_putchar(str[i++]);
	}
}
