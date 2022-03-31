/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:19:59 by didos-re          #+#    #+#             */
/*   Updated: 2022/03/31 17:49:25 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	ptr = (char *) malloc((i + 1) * sizeof(char));
	while (i >= 0)
	{
		ptr[i] = src[i];
		i--;
	}
	return (ptr);
}
