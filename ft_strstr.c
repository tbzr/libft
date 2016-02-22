/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:30:30 by tbazire           #+#    #+#             */
/*   Updated: 2013/11/28 11:04:18 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		index;

	i = 0;
	j = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			index = 0;
			j = i;
			while (s1[j] == s2[index])
			{
				j++;
				index++;
				if (s2[index] == '\0')
					return ((char *)(s1 + i));
			}
		}
		i++;
	}
	return (NULL);
}
