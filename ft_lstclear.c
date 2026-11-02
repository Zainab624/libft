/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayacoub <zayacoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:22:49 by zayacoub          #+#    #+#             */
/*   Updated: 2026/11/02 15:51:35 by zayacoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}

// #include <stdio.h>

// void	del(void *content)
// {
// 	(void)content;
// }

// int main()
// {
// 	t_list *lst;

// 	lst = NULL;
// 	ft_lstadd_front(&lst, ft_lstnew("Hello"));
// 	ft_lstadd_front(&lst, ft_lstnew("World"));
// 	printf("before: %d\n", ft_lstsize(lst));
// 	ft_lstclear(&lst, del);
// 	printf("after: %d\n", ft_lstsize(lst));
// 	return (0);
// }