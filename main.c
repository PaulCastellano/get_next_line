/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaraz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 16:11:05 by egaraz            #+#    #+#             */
/*   Updated: 2018/01/05 17:08:33 by egaraz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int		r;
	int		fd;
	int		i;
	char	*str;

	i = 0;
	fd = open("one_big_fat_line.txt.mine", O_RDONLY);
	while((r = get_next_line(fd, &str)))
	{
		i++;
		printf("%d - %d - <%s>\n", i, r, str);
	}
	printf("%d - %d - |%s|", i, r, str);
	return (0);
}
