/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:19:47 by hamel-yo          #+#    #+#             */
/*   Updated: 2025/02/18 10:00:39 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str, int *i)
{
	int			s;
	int			r;

	s = 1;
	r = 0;
	while (ft_isoprator(str[*i]) == 0 && ft_isdigit(str[*i]) == 0 && str[*i] != 0)
		*i = *i +1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			s = -1;
		*i = *i +1;
	}
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		r = r * 10 + (str[*i] - '0');
		*i = *i +1;
	}
	return (r * s);
}
