/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:45:52 by zayacoub          #+#    #+#             */
/*   Updated: 2026/11/02 18:11:04 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	long	nb;
	size_t	dig;

	nb = n;
	dig = 0;
	if (nb == 0)
		dig = 1;
	if (nb < 0)
	{
		nb *= (-1);
		dig = 1;
	}
	while (nb > 0)
	{
		dig++;
		nb = nb / 10;
	}
	return (dig);
}

static void	ft_fillstr(char *res, int nb, size_t dig)
{
	long	tmp;
	int		i;

	tmp = nb;
	if (tmp < 0)
		tmp *= (-1);
	i = dig - 1;
	if (tmp == 0)
		res[0] = '0';
	while (tmp > 0)
	{
		res[i] = (tmp % 10) + '0';
		tmp = tmp / 10;
		i--;
	}
	if (nb < 0)
		res[0] = '-';
	res[dig] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*res;

	len = ft_numlen(n);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_fillstr(res, n, len);
	return (res);
}
