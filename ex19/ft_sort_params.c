/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:21:32 by didos-re          #+#    #+#             */
/*   Updated: 2022/03/30 19:04:43 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	h;

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
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	if (argc > 1)
	{
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				i = 0;
			}
			i++;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
