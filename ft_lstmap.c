/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 09:14:32 by tbazire           #+#    #+#             */
/*   Updated: 2016/02/22 11:21:29 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*new_ptr;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	new_ptr = new;
	while ((lst = lst->next))
	{
		new_ptr->next = f(lst);
		new_ptr = new_ptr->next;
	}
	return (new);
}
