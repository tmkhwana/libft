/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:40:53 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 17:10:34 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(const char *s, char c)
{
	int		i;
	int		t;

	i = 0;
	t = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			t++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (t);
}

static int		wordlen(const char *str, char c)
{
	int	i;
	int t2;

	i = 0;
	t2 = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0' && str[i] != '\0')
	{
		t2++;
		i++;
	}
	return (t2);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		a;
	int		b;
	int		t;

	if (!s || !(str = (char**)malloc(sizeof(*str) * (word_count(s, c) + 1))))
		return (0);
	a = -1;
	b = 0;
	while (++a < word_count(s, c))
	{
		t = 0;
		if (!(str[a] = ft_strnew(wordlen(&s[b], c) + 1)))
			str[a] = NULL;
		while (s[b] == c)
			b++;
		while (s[b] != c && s[b])
			str[a][t++] = s[b++];
		str[a][t] = '\0';
	}
	str[a] = 0;
	return (str);
}
