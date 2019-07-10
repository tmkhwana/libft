/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:15:29 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 17:21:23 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrs(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			l;
	unsigned int	t;

	t = n;
	l = ft_nbrs(n);
	if (n < 0)
	{
		t = -n;
		l++;
	}
	if (!(str = ft_strnew(l)))
		return (NULL);
	str[--l] = t % 10 + '0';
	while (t /= 10)
		str[--l] = t % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
