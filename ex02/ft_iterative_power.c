/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:21:28 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/08 20:21:31 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 0;
	while (i <= nb)
	{
		result = nb * nb + result;
		printf("Iterative count: %d", i);
		i++;
	}
	if (result < 1)
	{
		return (0);
	}
	else
	{
		return (result);
	}
}
