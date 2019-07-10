/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:57:19 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 17:11:30 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	t;

	t = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (needle[t] != '\0')
		{
			if ((i + t) >= len || haystack[i + t] != needle[t])
				break ;
			t++;
		}
		if (needle[t] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
