/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:53:39 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/29 02:08:55 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !(str = (char *)malloc(sizeof(char) * (1 + len))))
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i += 1;
	}
	str[i] = '\0';
	return (str);
}
