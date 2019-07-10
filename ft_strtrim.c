/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:07:18 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/27 13:51:13 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	c;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	n = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 1), ""));
	while ((n >= 0) && (s[n] == ' ' || s[n] == '\n' || s[n] == '\t'))
		n--;
	str = (char *)malloc(sizeof(char) * (n - i + 2));
	if (str == NULL)
		return (NULL);
	c = 0;
	while (i <= n)
	{
		str[c++] = s[i++];
	}
	str[c] = '\0';
	return (str);
}
