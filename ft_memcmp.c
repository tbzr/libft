/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:26:42 by tbazire           #+#    #+#             */
/*   Updated: 2013/11/26 15:23:11 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*ptr[2];

	ptr[0] = s1;
	ptr[1] = s2;
	while (n--)
	{
		if (*ptr[0] != *ptr[1])
			return (*ptr[0] - *ptr[1]);
		ptr[0]++;
		ptr[1]++;
	}
	return (0);
}
