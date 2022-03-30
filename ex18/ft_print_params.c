/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 02:43:16 by didos-re          #+#    #+#             */
/*   Updated: 2022/03/30 19:05:36 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
