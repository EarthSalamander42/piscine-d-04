/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 13:06:49 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/08 13:07:00 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	j = nb;
	if ((nb <= 0) || nb > 12)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		while (i <= j)
		{
			nb = nb * i;
			i++;
		}
	}
	return (nb);
}
