/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:18:34 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 17:19:45 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*s1;
	char			*s2;
	unsigned int	i;

	if (dst == src)
		return (dst);
	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			s1[i] = s2[i];
	}
	else
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dst);
}
