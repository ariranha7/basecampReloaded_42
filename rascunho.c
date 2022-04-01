/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rascunho.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:20:41 by didos-re          #+#    #+#             */
/*   Updated: 2022/03/31 21:47:43 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min >= max)
		return (num = '\0');

	num = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (i < (max - min))
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}

int	main()
{
	int	min;
	int max;
	int	i;
	
	min = 50;
	max = 100;
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", ft_range(min, max)[i]);
		i++;
	}
	printf("\n");
}
