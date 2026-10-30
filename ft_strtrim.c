/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:42:41 by zayacoub          #+#    #+#             */
/*   Updated: 2026/10/30 17:14:16 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	len;
	char	*res;

	i = 0;
	end = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (end > i && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - i;
	if (i >= end)
		return (ft_strdup(""));
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1 + i, len + 1);
	return (res);
}
