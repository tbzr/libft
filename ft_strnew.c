/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:03:17 by tbazire           #+#    #+#             */
/*   Updated: 2013/11/27 15:35:07 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	char	*tmp1;
	size_t	i;

	tmp = (char *)malloc(sizeof(*tmp) * size);
	if (tmp == NULL)
		return (NULL);
	tmp1 = tmp;
	i = 0;
	while (i < size)
	{
		tmp1[i] = '\0';
		i++;
	}
	return (tmp);
}
