/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaraz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/24 00:38:30 by egaraz            #+#    #+#             */
/*   Updated: 2017/12/24 00:38:31 by egaraz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 1
# define MAX_FD 1025

typedef struct		s_lst
{
	struct s_lst	*next;
	struct s_lst	*prec;
	char			*s;
	int				fd;
}					t_lst;

int					get_next_line(const int fd, char **line);

#endif
