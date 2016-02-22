/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:20:45 by tbazire           #+#    #+#             */
/*   Updated: 2015/01/14 16:54:41 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*new;

	new = malloc(size);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
