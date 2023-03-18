/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:17:05 by dhadding          #+#    #+#             */
/*   Updated: 2023/03/14 16:44:34 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_list;
	int		lst_size;

	(void)del;
	if (!lst)
		return (0);
	lst_size = ft_lstsize(lst);
	map_list = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&map_list, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (&map_list[0]);
}
