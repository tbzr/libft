/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:07:01 by tbazire           #+#    #+#             */
/*   Updated: 2013/11/26 15:26:26 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = b;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (b);
}
