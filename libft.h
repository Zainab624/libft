/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:53:41 by zayacoub          #+#    #+#             */
/*   Updated: 2026/10/30 19:44:26 by zayacoub         ###   ########.fr       */
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

t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char	*str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size );
char	*ft_strdup(const char *s);
void	ft_putchar_fd(char c, int fd);

#endif