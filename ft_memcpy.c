/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:55:39 by tbazire           #+#    #+#             */
/*   Updated: 2013/11/26 15:24:55 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char			*s;
	const char		*p;

	i = 0;
	s = s1;
	p = s2;
	while (i < n)
	{
		s[i] = p[i];
		i++;
	}
	return (s1);
}
