/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 19:23:49 by zayacoub          #+#    #+#             */
/*   Updated: 2026/10/19 20:43:32 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (const char *big != '\0' && const char *little != '\0' && i < len && j < len)
	{
		while (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (s1[i] != s2[j] && j > len && i > len)
			
	}
}