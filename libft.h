/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:53:41 by zayacoub          #+#    #+#             */
/*   Updated: 2026/10/27 20:15:33 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char	*str);
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

#endif