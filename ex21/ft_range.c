/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:19:28 by didos-re          #+#    #+#             */
/*   Updated: 2022/04/01 02:32:20 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
