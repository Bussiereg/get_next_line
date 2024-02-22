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

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd0;
	int		i;
	char	*str;

	i = 0;
	if (argc != 2)
		write(1, "Error\n", 6);
	fd0 = open("test_file/test.txt", O_RDONLY);
	if (fd0 == -1)
		write(1, "open() failed", 13);
	while (i < atoi(argv[1]))
	{
		str = get_next_line(fd0);
		printf("%s", str);
		if (str == NULL)
		{
			close(fd0);
			return (0);
		}
		free(str);
		i++;
	}
	close(fd0);
	return (0);
}
