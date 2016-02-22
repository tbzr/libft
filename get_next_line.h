/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbazire <tbazire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 12:47:57 by tbazire           #+#    #+#             */
/*   Updated: 2015/02/26 11:42:53 by tbazire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define GNL_OK		(0x0)
# define GNL_FAIL	(-0x1)

/*
** Buffer size
*/

# define BUFF_SIZE (1)

# include "libft.h"

int		get_next_line(int const fd, char **line);

#endif
