/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:29:57 by tbazire           #+#    #+#             */
/*   Updated: 2013/11/26 15:22:53 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*ptr;

	ptr = s;
	while (n-- > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void*)ptr);
		ptr++;
	}
	return (NULL);
}
