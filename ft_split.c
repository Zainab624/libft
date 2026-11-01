/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:51:51 by zayacoub          #+#    #+#             */
/*   Updated: 2026/11/01 14:10:39 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while ((s[i] != '\0') && (s[i] == c))
			i++;
		if ((s[i] != '\0') && (s[i] != c))
		{
			while ((s[i] != '\0') && (s[i] != c))
			{
				i++;
			}
			word++;
		}
	}
	return (word);
}

static char	*ft_copy_word(char const *s, size_t start, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_memcpy(word, s + start, len);
	word[len] = '\0';
	return (word);
}

static int	ft_fill_split(char **res, char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			start = i;
			res[j] = ft_copy_word(s, start, c);
			if (!res[j])
				return (-1);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	res[j] = NULL;
	return (0);
}

static void	ft_free_split(char **res)
{
	size_t	i;

	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	size_t	word;
	char	**res;

	if (s == NULL)
		return (NULL);
	word = ft_count_words(s, c);
	res = malloc((word + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	if (ft_fill_split(res, s, c) == -1)
	{
		ft_free_split(res);
		return (NULL);
	}
	return (res);
}
