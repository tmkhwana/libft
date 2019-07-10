/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:43:49 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/07/04 18:30:54 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && (i < (n - 1)))
	{
		i++;
	}
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
		return (1);
	else if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
		return (-1);
	else
		return (0);
}
