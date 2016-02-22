/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:59:36 by tbazire           #+#    #+#             */
/*   Updated: 2015/01/14 15:50:55 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		n;
	char	*new;

	i = 0;
	n = 0;
	j = ft_strlen(s);
	j--;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	while (s[j] == '\t' || s[j] == '\n' || s[j] == ' ')
		j--;
	new = (char *)malloc(sizeof(*new) * (ft_strlen(s) - j + i - 1));
	while (i <= j)
	{
		new[n] = s[i];
		n++;
		i++;
	}
	new[n] = '\0';
	return (new);
}
