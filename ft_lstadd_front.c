/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:17:30 by zayacoub          #+#    #+#             */
/*   Updated: 2026/11/02 16:10:22 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*lst;
// 	lst = NULL;
// 	ft_lstadd_front(&lst, ft_lstnew("Hello"));
// 	ft_lstadd_front(&lst, ft_lstnew("World"));
// 	ft_lstadd_front(&lst, ft_lstnew("42"));
// 	printf("%s\n", (char *)lst->content);
// 	printf("%s\n", (char *)lst->next->content);
// 	printf("%s\n", (char *)lst->next->next->content);
// 	return(0);
// }