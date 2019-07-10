/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:48:27 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/27 12:49:16 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	while (dst[i] && i < dstsize)
		i++;
	while ((src[n]) && ((i + n + 1) < dstsize))
	{
		dst[i + n] = src[n];
		n++;
	}
	if (i != dstsize)
		dst[i + n] = '\0';
	return (i + ft_strlen(src));
}
