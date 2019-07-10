/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:18:29 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/07/04 18:46:01 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	size_t	nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str == '0')
		str++;
	while (*str && ft_isdigit(*str))
	{
		nbr = nbr * 10 + *str++ - '0';
		i++;
	}
	if (i > 10 && sign < 0)
		return (0);
	if (i > 10 && sign > 0)
		return (-1);
	return (nbr * sign);
}
