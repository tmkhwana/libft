/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:08:34 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/27 12:56:12 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*i;
	char	*t;

	i = (char*)src;
	t = (char*)dst;
	while (n-- > 0)
	{
		if (*i == (char)c)
		{
			*(t++) = *(i++);
			return (t);
		}
		*(t++) = *(i++);
	}
	return (NULL);
}
