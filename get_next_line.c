/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 12:47:52 by tbazire           #+#    #+#             */
/*   Updated: 2016/02/19 11:34:42 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static void	rotate_buf(char *buf, size_t buf_size, unsigned int n)
{
	size_t	i;

	i = 0;
	while (i < buf_size)
	{
		if (i + n < buf_size)
			buf[i] = buf[i + n];
		else
			buf[i] = '\0';
		i++;
	}
}

static int	get_line(char *buf, char **line)
{
	size_t	o_len;
	char	*str;
	size_t	len;
	char	eol;
	int		x;

	x = ft_memchr(buf, '\n', BUFF_SIZE) ? 1 : 0;
	eol = x ? '\n' : '\0';
	len = (char*)ft_memchr(buf, eol, BUFF_SIZE + 1) - buf + 1;
	o_len = *line ? ft_strlen(*line) : 0;
	if (!(str = ft_strnew(o_len + len)))
		return (GNL_FAIL);
	if (*line)
	{
		ft_strcpy(str, *line);
		free(*line);
	}
	ft_memcpy(str + o_len, buf, len - 1);
	*line = str;
	rotate_buf(buf, BUFF_SIZE, len);
	return (x);
}

int			get_next_line(int const fd, char **line)
{
	static char		buf[BUFF_SIZE + 1];
	size_t			offset;
	int				ret;
	int				r;

	if (BUFF_SIZE > 0 && line && fd >= 0)
	{
		*line = NULL;
		if ((r = get_line(buf, line)) != 0)
			return (r);
		offset = ft_strlen(buf);
		while ((ret = read(fd, buf + offset, BUFF_SIZE - offset)) > 0)
		{
			if ((r = get_line(buf, line)) != GNL_OK)
				return (r);
		}
		if (ret == GNL_FAIL)
			return (GNL_FAIL);
		if (!ret && **line)
			return (1);
		ft_memset(buf, 0, BUFF_SIZE);
		return (GNL_OK);
	}
	return (GNL_FAIL);
}
