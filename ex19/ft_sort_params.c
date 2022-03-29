/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:21:32 by didos-re          #+#    #+#             */
/*   Updated: 2022/03/29 07:36:56 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	h;

	(void) argc;
	(void) argv;
	i = 1;
	while (i < argc)
	{
		h = 0;
		while (argv[i][h] != '\0')
		{
			ft_putchar(argv[i][h]);
			h++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
