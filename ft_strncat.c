/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:22:42 by tbazire           #+#    #+#             */
/*   Updated: 2015/01/14 15:51:18 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				y;

	i = 0;
	y = 0;
	while (s1[y] != '\0')
		y++;
	while (n-- && s2[i] != '\0')
	{
		s1[y] = s2[i];
		i++;
		y++;
	}
	s1[y] = '\0';
	return (s1);
}
