/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:29:40 by dhadding          #+#    #+#             */
/*   Updated: 2023/03/14 15:38:27 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcnt(char const *s, char c)
{
	size_t	word_count;
	size_t	trigger;

	trigger = 0;
	word_count = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{	
			trigger = 1;
			word_count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (word_count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*out;
	size_t	i;

	out = malloc(n + 1);
	if (!out)
		return (0);
	i = 0;
	while (i < n && s[i])
	{
		out[i] = s[i];
		i++;
	}
	while (i <= n)
		out[i++] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (0);
	k = ft_wordcnt(s, c);
	split = malloc(sizeof(char *) * (k + 1));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (i < k)
	{
		while (s[j] == c)
			j++;
		s = &s[j];
		j = 0;
		while (s[j] != c && s[j])
			j++;
		split[i++] = ft_strndup(s, j);
	}
	split[i] = 0;
	return (split);
}
