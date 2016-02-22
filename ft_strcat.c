/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 16:48:17 by tbazire           #+#    #+#             */
/*   Updated: 2015/01/14 15:48:11 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	unsigned int	i;
	int				pos;

	i = 0;
	pos = ft_strlen(s1);
	while (i < ft_strlen(s2))
	{
		s1[pos + i] = s2[i];
		i++;
	}
	s1[pos + i] = '\0';
	return (s1);
}
