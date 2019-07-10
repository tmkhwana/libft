/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:25:30 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/29 02:29:53 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	n;
	int	len;

	i = 0;
	len = ft_strlen((char *)needle);
	if (len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		n = 0;
		while (haystack[i + n] == needle[n])
		{
			if (n == len - 1)
				return ((char *)haystack + i);
			n++;
		}
		i++;
	}
	return (NULL);
}
