/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 06:30:51 by didos-re          #+#    #+#             */
/*   Updated: 2022/04/03 06:34:39 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_display_file(char *filepath)
{
	int		size;
	int		file_descriptor;
	char	buffer[BUF_SIZE + 1];

	file_descriptor = open(filepath, O_RDONLY);
	if (file_descriptor == -1)
	{
		ft_putstr("Cannot read file.\n");
		close(file_descriptor);
		return (1);
	}
	while (file_descriptor)
	{
		size = read(file_descriptor, buffer, BUF_SIZE);
		if (size == 0)
			break ;
		if (size == -1)
			ft_putstr("Cannot read file.\n");
		buffer[size] = 0;
		ft_putstr(buffer);
	}
	close(file_descriptor);
	return (0);
}
