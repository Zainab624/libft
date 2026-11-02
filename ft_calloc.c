/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:30:49 by zayacoub          #+#    #+#             */
/*   Updated: 2026/11/02 18:23:32 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		total;

	if (size != 0 && nmemb * size / size != nmemb)
		return (NULL);
	total = size * nmemb;
	if (total == 0)
		total = 1;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
// 	int *ptr;
// 	int i = 0;
// 	ptr = ft_calloc(1999999999999999, sizeof(int) * 5);
// 	while (i < 5)
// 	{
// 		printf("%d ", ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// 	return (0);
// }