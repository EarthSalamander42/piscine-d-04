/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 09:56:42 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/09 09:56:44 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;
	int check;

	result = 1;
	check = 0;
	while (result <= nb / 2)
	{
		check = result * result;
		if (check != nb)
		{
			result = result + 1;
		}
		else
		{
			return (result);
		}
	}
	return (0);
}
