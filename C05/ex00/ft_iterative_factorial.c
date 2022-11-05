/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoncad <jumoncad@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:05:18 by jumoncad          #+#    #+#             */
/*   Updated: 2022/11/01 09:54:14 by jumoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	fact;

	res = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	else if ((nb == 0) || (nb == 1))
		res = 1;
	while (fact <= nb)
	{
		res = res * fact;
		fact++;
	}
	return (res);
}
