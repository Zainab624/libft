/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:38:43 by zayacoub          #+#    #+#             */
/*   Updated: 2026/11/01 17:34:07 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

//#include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "abcd";
// 	int		i;

// 	ft_bzero(str, 3);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", (unsigned char)str[i]);
// 		i++;
// 	}
// 	return (0);
// }