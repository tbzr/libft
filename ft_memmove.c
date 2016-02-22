/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:17:20 by tbazire           #+#    #+#             */
/*   Updated: 2013/11/26 15:26:17 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*p;

	if (!n)
		return (s1);
	p = s2;
	ptr = s1;
	if (p < ptr)
	{
		ptr += n;
		p += n;
		while (n--)
			*--ptr = *--p;
	}
	else
	{
		while (n--)
			*ptr++ = *p++;
	}
	return (s1);
}
