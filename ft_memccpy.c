/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:46:01 by tbazire           #+#    #+#             */
/*   Updated: 2013/11/26 14:26:58 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*cs1;
	const char		*cs2;
	unsigned int	i;
	char			cs;

	i = 0;
	cs = c;
	cs1 = s1;
	cs2 = s2;
	while (n > 0)
	{
		if (cs2[i] == cs)
		{
			cs1[i] = cs2[i];
			return ((void *)(cs1 + i + 1));
		}
		cs1[i] = cs2[i];
		i++;
		n--;
	}
	return (NULL);
}
