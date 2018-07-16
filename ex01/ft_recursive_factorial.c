/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 13:46:36 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/08 13:46:41 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	j = nb;
	if ((nb < 0) || nb > 12)
	{
		printf("Result: %d", 0);
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		printf("Result: %d", 1);
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
