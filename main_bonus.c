/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbussier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:28:36 by gbussier          #+#    #+#             */
/*   Updated: 2023/02/24 17:29:46 by gbussier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	main(int argc, char **argv)
{
	int		fd0;
	int		fd1;
	int		i;
	char	*str1;
	char	*str2;

	i = 0;
	if (argc != 2)
		write(1, "Error\n", 6);
	fd0 = open("book.txt", O_RDONLY);
	fd1 = open("test.txt", O_RDONLY);
	if (fd0 == -1)
		write(1, "open1() failed", 13);
	if (fd1 == -1)
		write(1, "open2() failed", 13);	
	while (i < atoi(argv[1]))
	{
		str1 = get_next_line(fd0);
		printf("%s", str1);
		if (str1 == NULL)
		{
			close(fd0);
		}
		free(str1);
		str2 = get_next_line(fd1);
		printf("%s", str2);
		if (str2 == NULL)
		{
			close(fd1);
		}
		free(str2);
		i++;
	}
	return (0);
}
