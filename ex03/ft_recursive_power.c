/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:50:44 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/08 20:50:50 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (nb == 0)
		return (1);
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
