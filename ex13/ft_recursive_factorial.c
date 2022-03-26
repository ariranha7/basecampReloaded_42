/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 05:26:16 by didos-re          #+#    #+#             */
/*   Updated: 2022/03/26 17:40:02 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{	
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb <= 12 && nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
