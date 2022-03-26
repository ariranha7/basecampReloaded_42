/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:27:52 by didos-re          #+#    #+#             */
/*   Updated: 2022/03/26 17:39:35 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb <= 12 && nb > 0)
	{
		f = 1;
		while (nb >= 1)
		{
			f = f * nb;
			nb--;
		}
		return (f);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
